#pragma once

#include "Board.h"
#include "Move.h"
#include "Types.h"

class Player {
    Colour colour;

    int wins;
    int loses;

public:
    virtual Move getMove(Board board);
};