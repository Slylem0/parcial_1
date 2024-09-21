#ifndef TRIKI_H
#define TRIKI_H

class Triki
{
public:
    Triki();
    void show_table(char table[9]);
    bool x_winn(char table[9]);
    bool o_wins(char table[9]);
    void reboot_table(char table[9]);
};



#endif //TRIKI_H
