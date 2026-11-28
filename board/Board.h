#pragma once

#include "board/Move.h"
#include "pieces/Piece.h"
#include <memory>

class Board {
    // internal board representation
    // ability to
    std::unique_ptr<Piece> board[8][8];

public:
    // piece methods
    Piece *getPiece(Coordinate coord) const;
    void setPiece(std::unique_ptr<Piece> piece, Coordinate coord);
    void movePiece(Move &move);

    // board methods
    void clearBoard(); // empties all the pieces on the board
    void display(); // prints the board
};