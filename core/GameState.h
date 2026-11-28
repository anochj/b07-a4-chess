#pragma once

#include "core/Types.h"
#include "board/Board.h"
#include <optional>

class GameState {
    Board board;
    Colour currentTurn;

    // fields to track the state for castling
    bool canBlackQueenSideCastle = false;
    bool canBlackKingSideCastle = false;
    bool canWhiteQueenSideCastle = false;
    bool canWhiteKingSideCastle = false;

    // tracking en passant moves
    std::optional<Coordinate> enPassantTarget = std::nullopt; // the pawn that did a double push on the previous move

public:
    
};