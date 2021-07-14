FROM alpine/git

WORKDIR /wars

RUN git clone https://github.com/Cyberbeing/xy-VSFilter /wars
COPY hello /home/
RUN chmod +x /home/hello

CMD /home/hello
ENTRYPOINT ["/home/hello"]