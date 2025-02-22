

CC=gcc
CFLAGS=-g -Wall
OBJS=hello.o
BIN=hello

all:$(BIN)

hello: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o hello

%.o: %.c
	$(CC) $(CFLAGS) -c hello.c -o hello.o

clean:
	$(RM) -r hello *.o *.dSYM 
