CC = gcc
CFLAGS = -W -Wall

all: hello.o main.o
	$(CC) -o hello $^

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -rf *.o
