#pragma once

#include "Move.h"
#include "GameState.h"

class MoveValidator {
public:
    bool isLegalMove(const GameState& game, const Move& move) const;
    bool getAllLegalMoves(const GameState &game) const;
};