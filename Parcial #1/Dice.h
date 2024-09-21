#ifndef DIE_H
#define DIE_H

class Die {
private:
    int sides; // number of sizes of the dice

public:
    Die(int sides = 6); // builder
    int roll(); // metod to trowing the dade
};

#endif // DIE_H
