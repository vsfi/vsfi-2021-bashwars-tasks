FROM busybox

WORKDIR /tmp

COPY file.txt /tmp/access.log
COPY hello /home/
RUN chmod +x /home/hello

RUN chmod 666 /tmp/*

RUN adduser -D popit 

USER popit
CMD /home/hello