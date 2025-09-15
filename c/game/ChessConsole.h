#pragma once

#include "ChessBoard.h"
#include "ChessGraphics.h"

class ChessConsole {
private:
    ChessBoard board;
    ChessGraphics graphics;

private:
    ChessConsole(ChessConsole &program);

public:
    ChessConsole(void);

    int Run(void);
};
