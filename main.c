#include "stdio.h"
#include "defs.h"
#include "string.h"

#define FEN1 "rnbqkbnr/pppppppp/8/8/4P3/8/PPPP1PPP/RNBQKBNR b KQkq e3 0 1"
#define FEN2 "rnbqkbnr/pp1ppppp/8/2p5/4P3/8/PPPP1PPP/RNBQKBNR w KQkq c6 0 2"
#define FEN3 "rnbqkbnr/pp1ppppp/8/2p5/4P3/5N2/PPPP1PPP/RNBQKB1R b KQkq - 1 2"

void AllInit();

int main(int argc, char **argv){
    AllInit();

    S_BOARD pos[1];
    S_SEARCHINFO info[1];
    InitPvTable(pos->PvTable);

    char fen[400];
    
    info->depth = atoi(argv[1]);
    for(int i = 2;i<argc;i++){
        strcat(fen,argv[i]);
        if(!(i==argc-1))
        strcat(fen," ");

        
    }

    ParseFen(fen,pos);
    SearchPosition(pos, info);


    

    return 0;
}
