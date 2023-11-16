all: 
	gcc main.c init.c bitboards.c hashkeys.c board.c data.c attack.c io.c movegen.c validate.c makemove.c perft.c pvtable.c search.c evaluate.c uci.c misc.c -o main