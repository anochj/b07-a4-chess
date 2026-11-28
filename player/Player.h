#pragma once

#include "board/Board.h"
#include "board/Move.h"
#include "core/Types.h"

class Player {
    Colour colour;

    int wins;
    int loses;

public:
    virtual Move getMove(Board board);
};