#include <iostream>
#include "Triki.h"
using namespace std;

Triki::Triki() {
    cout << "****************************\n";
    cout << "  Welcome to The Triki App  " << endl;
    cout << "****************************\n";

    cout << "7" << "  |  " << "8" << "  |  " << "9" << endl;
    cout << "---|---" << "--|---" << endl;
    cout << "4" << "  |  " << "5" << "  |  " << "6" << endl;
    cout << "---|---" << "--|---" << endl;
    cout << "1" << "  |  " << "2" << "  |  " << "3" << endl;

    cout << "____________________________________________________\n";
}


void Triki::show_table(char table[9]) {

    cout << table[6] << " |  " << table[7] << "  |  " << table[8] << endl;
    cout << "---|---" << "--|---" << endl;
    cout << table[3] << "  |  " << table[4] << "  |  " << table[5] << endl;
    cout << "---|---" << "--|---" << endl;
    cout << table[0] << "  |  " << table[1] << "  |  " << table[2] << endl;
}

void Triki::reboot_table(char table[9]) {

    for (int i = 0; i < 9; i++) {
        table[i] = ' ';
    }
}

bool Triki::x_winn(char table[9]) {
    return  (table[0] == 'X' && table[1] == 'X' && table[2] == 'X') || (table[3] == 'X' && table[4] == 'X' && table[5] == 'X')
    || (table[6] == 'X' && table[7] == 'X' && table[8] == 'X') || (table[0] == 'X' && table[3] == 'X' && table[6] == 'X')
    || (table[1] == 'X' && table[4] == 'X' && table[7] == 'X') || (table[2] == 'X' && table[5] == 'X' && table[8] == 'X')
    || (table[0] == 'X' && table[4] == 'X' && table[8] == 'X') || (table[2] == 'X' && table[4] == 'X' && table[6] == 'X');
}

bool Triki::o_wins(char table[9]) {
    return  (table[0] == 'O' && table[1] == 'O' && table[2] == 'O') || (table[3] == 'O' && table[4] == 'O' && table[5] == 'O')
    || (table[6] == 'O' && table[7] == 'O' && table[8] == 'O') || (table[0] == 'O' && table[3] == 'O' && table[6] == 'O')
    || (table[1] == 'O' && table[4] == 'O' && table[7] == 'O') || (table[2] == 'O' && table[5] == 'O' && table[8] == 'O')
    || (table[0] == 'O' && table[4] == 'O' && table[8] == 'O') || (table[2] == 'O' && table[4] == 'O' && table[6] == 'O');
}
