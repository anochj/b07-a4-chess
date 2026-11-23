#ifndef TYPES_H
#define TYPES_H

enum Colour {
    WHITE,
    BLACK
};

enum PieceType {
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

#endif