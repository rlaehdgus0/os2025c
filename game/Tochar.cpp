#include "Pieces.h"
#include "ChessGraphics.h"

char *ChessGraphics::Tochar(const Pieces *pPiece) {
    if (pPiece == 0){
        return " ";
    }
    else {
        switch(pPiece->Type) {
        case Pieces::Ki:
            return "ŷ";
        case Pieces::Qu:
            return "��";
        case Pieces::Pa:
            return "��";
        }
        default:
            return 0;
    }

    return 0;
}
