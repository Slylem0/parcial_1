#include <iostream>
#include "Gamedice.h"

// Constructor
Game::Game() : die(6) {}

// Method yo play
void Game::play() {
    std::cout << "Player 1 throw the dice...";
    int player1Roll = die.roll();
    std::cout << "Result: " << player1Roll << std::endl;

    std::cout << "player 2 throw the dice";
    int player2Roll = die.roll();
    std::cout << "Result: " << player2Roll << std::endl;

    // Determina el ganador
    if (player1Roll > player2Roll) {
        std::cout << "playr 1 win!" << std::endl;
        std::cout <<"_________________________________" << std::endl;
    } else if (player2Roll > player1Roll) {
        std::cout << "player 2 win!" << std::endl;
        std::cout <<"_________________________________" << std::endl;
    } else {
        std::cout << "its a draw!" << std::endl;
        std::cout <<"_________________________________" << std::endl;
    }
}