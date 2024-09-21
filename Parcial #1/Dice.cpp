#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
#include "Dice.h"

// Builder
Die::Die(int sides) : sides(sides) {
    srand(static_cast<unsigned int>(time(0))); // inicilaizate the aleatority
}

// metod for trowing the dice
int Die::roll() {
    return (rand() % sides) + 1; // Retorn an number to 1 - 6
}
