#pragma once

#include "Pieces.h"

class King : public Pieces {
private:
    bool bFirst = true;
public:
    king(unsigned int iTeam);

    bool Move(int ax,int ay, int bx, int by) const;

    friend class ChessBoard;
};

class Queen : public Pieces {
public:
    Queen(unsigned int iTeam);

    bool Move(int ax, int ay, int bx, int by) const;
};

class Pawn : public Pieces {
private:
    bool bFirst = true;
public:
    Pawn(unsigned int iTeam);

    bool Move(int ax, int ay, int bx, int by) const;
    bool Attack(int ax, int ay, int bx, int by) const;

    friend class ChessBoard;
};
