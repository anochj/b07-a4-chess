#pragma once

#include "core/Types.h"
#include "board/Move.h"
#include "core/GameState.h"
#include <vector>

class Piece {
    Colour colour;
    PieceType type;

public:
    Piece(Colour colour, PieceType type) : colour{colour}, type{type} {};

    virtual std::vector<Move> getPossibleMoves(const GameState &state, Coordinate position) const;

    // getters
    Colour getColour() const;
    PieceType getType() const;
};