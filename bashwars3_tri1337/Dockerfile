FROM busybox

WORKDIR /tmp

COPY files /tmp/files/
COPY hello /home/
RUN chmod +x /home/hello

RUN adduser -D elite 
RUN chmod -R 666 /tmp/*
RUN chmod -R 777 /tmp/files


USER elite
CMD /home/hello