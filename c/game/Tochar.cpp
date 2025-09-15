#include "Pieces.h"
#include "ChessGraphics.h"

char *ChessGraphics::Tochar(const Pieces *pPiece) {
    if (pPiece == 0){
        return " ";
    }
    else {
        switch(pPiece->Type) {
        case Pieces::Ki:
            return "Å·";
        case Pieces::Qu:
            return "Äý";
        case Pieces::Pa:
            return "Æù";
        }
        default:
            return 0;
    }

    return 0;
}
