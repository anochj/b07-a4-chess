#ifndef MOVE_H
#define MOVE_H

#include "Types.h"
#include <optional>

struct Move {
    Coordinate start; // cell to move from
    Coordinate end; // cell to move to

   std::optional<PieceType> promotion; // only for pawn promotion
};

#endif