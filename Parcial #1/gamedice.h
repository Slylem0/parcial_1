//
// Created by pnico on 19/09/2024.
//

#ifndef GAMEDICE_H
#define GAMEDICE_H

#include "Dice.h"

class Game {
private:
    Die die; // dade to the code

public:
    Game(); // builder
    void play(); // method to play
};

#endif // GAME_H
