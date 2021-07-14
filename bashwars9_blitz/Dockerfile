FROM alpine

RUN apk add gcc
RUN apk add musl-dev

RUN adduser --disabled-password blitz 

COPY test.sh /home/blitz
RUN chmod 700 /home/blitz/test.sh

COPY runner.c /home/blitz
RUN gcc /home/blitz/runner.c -o /home/blitz/runner

RUN chmod 755 /home/blitz/runner
RUN chmod +s /home/blitz/runner
RUN rm /home/blitz/runner.c

COPY banner.txt /home/
COPY hello /home/
RUN chmod +x /home/hello

COPY *.txt /home/blitz

WORKDIR /home/blitz

ENTRYPOINT ["/home/hello"]

CMD /home/hello