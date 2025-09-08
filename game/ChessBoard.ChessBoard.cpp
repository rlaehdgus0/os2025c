#include "ChessBoard.h"

#include "Pieces_data.h"

ChessBoard::ChessBoard(bool bStd){
    for(int i=0; i < 8; i++){
        for(int j=0; j< 8; j++){
            pBoard[i][j] = 0;
        }
    }

    if(bStd){
        unsigned int iCampTeam = Pieces::Black;
        unsigned int iCampPosition[2] = { 0, 1 };

        for(unsigned int i=0; i< 2; i++){
            pBoard[4][iCampPosition[0]] = new King(iCampTeam);
            pBoard[3][iCampPosition[0]] = new Queen(iCampTeam);

            for(unsigned int j=0; j< 8; j++){
                pBoard[j][iCampPosition[1]] = new Pawn(iCampTeam);
            }
            iCampPosition[0] = 7;
            iCampPosition[1] = 6;
            iCampTeam = Pieces::White;
        }


    }
}
