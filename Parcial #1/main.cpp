#include <iostream>
#include "Gamedice.h"
#include "triki.h"

using namespace std;

int main() {
    float option;

    while (true) {
        cout << "Welcome to this program, please select an option\n";
        cout << "1. Dice\n2. Tricky\n3. Exit\n";
        cout << "____________________________________________\n";
        cin >> option;

        if (option == 1.0) {
            // Lógica para el juego de dados
            Game game;  // Crea una instancia del juego de dados
            game.play(); // Inicia el juego de dados
        }

        else if (option == 2.0) {
            // Lógica para el juego de Triki (Tres en raya)
            Triki controller;
            char table[9] = { // Inicializa el tablero
                ' ', ' ', ' ',
                ' ', ' ', ' ',
                ' ', ' ', ' ',
            };
            int firstposi, secondposi;
            int turn = 0;
            while (true) {
                if (turn == 9) {  // Si se han jugado 9 turnos, es empate
                    cout << "This match is a draw, nobody wins :(\n";

                    char option;
                    cout << "Do you want to play again? (Y/N): ";
                    cin >> option;

                    if (option == 'Y' || option == 'y') {
                        controller.reboot_table(table); // Reinicia el tablero
                        turn = 0;
                        controller.show_table(table); // Muestra el tablero reiniciado
                        continue;
                    } else {
                        break; // Sale del ciclo
                    }
                }

                if (turn % 2 == 0) { // Turno del jugador X
                    cout << "\nIt's your turn, X player: ";
                    while (true) {
                        cin >> firstposi;
                        if (table[firstposi - 1] == 'O' || table[firstposi - 1] == 'X') {
                            cout << "That position is already taken, try again.\n";
                            continue;
                        } else {
                            break;
                        }
                    }
                    table[firstposi - 1] = 'X';
                    controller.show_table(table); // Muestra el tablero actualizado

                    if (controller.x_winn(table)) { // Verifica si ganó el jugador X
                        cout << "\nX player won the game!!!\n";

                        char option;
                        cout << "Do you want to play again? (Y/N): ";
                        cin >> option;

                        if (option == 'Y' || option == 'y') {
                            controller.reboot_table(table); // Reinicia el tablero
                            turn = 0;
                            controller.show_table(table);
                            continue;
                        } else {
                            break;
                        }
                    }
                } else { // Turno del jugador O
                    cout << "\nIt's your turn, O player: ";
                    while (true) {
                        cin >> secondposi;
                        if (table[secondposi - 1] == 'O' || table[secondposi - 1] == 'X') {
                            cout << "That position is already taken, try again.\n";
                            continue;
                        } else {
                            break;
                        }
                    }
                    table[secondposi - 1] = 'O';
                    controller.show_table(table); // Muestra el tablero actualizado

                    if (controller.o_wins(table)) { // Verifica si ganó el jugador O
                        cout << "\nO player won the game!!!\n";

                        char option;
                        cout << "Do you want to play again? (Y/N): ";
                        cin >> option;

                        if (option == 'Y' || option == 'y') {
                            controller.reboot_table(table); // Reinicia el tablero
                            turn = 0;
                            controller.show_table(table);
                            continue;
                        } else {
                            break;
                        }
                    }
                }

                turn++; // Incrementa el turno
            }
        }
        else if(option == 3.0) {
            cout << "Goodbye and thanks for playing with us!\n";
            break; // Sale del ciclo principal
        }
        else {
            cout <<"Option incorretct, pls select a valid options\n";
        }
    }

    return 0; // Finaliza el programa
}
