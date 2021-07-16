FROM busybox

WORKDIR /tmp

COPY files /tmp/files/
COPY hello /home/
RUN chmod +x /home/hello

RUN adduser -D elite 

RUN chmod -R 744 /tmp/files
RUN chmod 755 /tmp/files


USER elite
CMD /home/hello