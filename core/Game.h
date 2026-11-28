#pragma once

#include "GameState.h"
#include "Player.h"

#include <memory>
#include <map>
#include <string>

class Game {
    std::map<std::string, std::unique_ptr<Player>> players;
    std::unique_ptr<GameState> currentGame;

public:
    void startGame();

    // player methods
    void newPlayer(std::string, Player &player);
    void removePlayer(std::string);

    // game methods
    void newGame();

    // display methods
    void printScores();
};