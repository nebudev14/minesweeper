all: main board
	gcc -Wall -o main main.o board.o

main: main.c
	gcc -c -I . -Wall -o main.o main.c

board: board.c board.h
	gcc -c -I . -Wall -o board.o board.c

clean:
	rm -rf main main.o board.o