all: main board game
	gcc -Wall -o main main.o board.o game.c

main: main.c
	gcc -c -I . -Wall -o main.o main.c

board: board.c board.h
	gcc -c -I . -Wall -o board.o board.c

game: game.c game.h
	gcc -c -I . -Wall -o game.o game.c

clean:
	rm -rf main main.o board.o game.o