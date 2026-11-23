#ifndef MOVE_H
#define MOVE_H

enum Colour {
    WHITE,
    BLACK
};

enum CellPiece {
    EMPTY,
    KING, 
    QUEEN,
    ROOK,
    BISHOP,
    KNIGHT, 
    PAWN,
};

struct Coordinate {
    int x, y;
};

struct Move {
    Coordinate start; // cell to move from
    Coordinate end; // cell to move to

   CellPiece promotion = EMPTY; // only for pawn promotion
};

#endif