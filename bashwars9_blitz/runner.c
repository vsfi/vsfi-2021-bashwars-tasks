#include <stdio.h>     // sprintf
#include <stdlib.h>    // malloc
#include <string.h>    // strlen



char* escapeshellarg(char* str) {
    char *escStr;
    char *escStrB;
    int i;
    int count = strlen(str);
    int ptr_size = count + 3;

    escStr = (char *) calloc(ptr_size, sizeof(char));
    escStrB = (char *) calloc(ptr_size, sizeof(char));
    if (escStr == NULL) {
        return NULL;
    }
    sprintf(escStr, "'");

    for(i=0; i<count; i++) {
        sprintf(escStrB, "%s", escStr);
        if (str[i] == '\'') {
            ptr_size += 3;
            escStr = (char *) realloc(escStr,ptr_size * sizeof(char));
            if (escStr == NULL) {
                return NULL;
            }
            sprintf(escStr, "%s'\\''", escStrB);
            escStrB = (char *) realloc(escStrB,ptr_size * sizeof(char));
        } else {
	        sprintf(escStr, "%s%c", escStrB, str[i]);
        }
    }

    sprintf(escStrB, "%s'", escStr);
    return escStrB;
}


int main(int argc, char *argv[])
{
	if(argc < 4) {
		printf("usage: runner flag1 flag2 flag3\n");
		return -1;
	}

    setuid( 0 );   // you can set it at run time also
    ssize_t bufsz = snprintf(NULL, 0, "/home/blitz/test.sh %s %s %s", escapeshellarg(argv[1]), escapeshellarg(argv[2]), escapeshellarg(argv[3]));
	char* buf = malloc(bufsz + 1);
	snprintf(buf, bufsz + 1, "/home/blitz/test.sh %s %s %s", escapeshellarg(argv[1]), escapeshellarg(argv[2]), escapeshellarg(argv[3]));

    system(buf);
    return 0;
 }