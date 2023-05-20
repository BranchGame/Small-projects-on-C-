// Игра "Камень, ножницы, бумага"
// Игроки одновременно говорят одно из этих трех слов
// Игра проводится по 3 правилам
// 1. Камень точит ножницы
// 2. Бумага накрывает камень
// 3. Ножницы режут бумагу
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    string rps[3] = { "ROCK", "SCISSORS", "PAPER" };
    int x = 0, y = 0, z = 0;
    while (true) {
        system("cls");
        cout << x << " Wins, " << y << " Losses, " << z << " Ties" << endl;
        cout << "Enter your move: (R)ock (P)aper (S)cissors or (Q)uit" << endl;
        char s;
        cin >> s;
        string you;
        if (s == 'Q' || s == 'q') {
            return 0;
        }
        else if (s == 'R' || s == 'r') {
            you += "ROCK";
        }
        else if (s == 'P' || s == 'p') {
            you += "PAPER";
        }
        else if (s == 'S' || s == 's') {
            you += "SCISSORS";
        }
        string opp = rps[rand() % 3];
        cout << you << " versus..." << endl;
        Sleep(1000);
        cout << "3.." << endl;
        Sleep(1000);
        cout << "2.." << endl;
        Sleep(1000);
        cout << "1.." << endl;
        Sleep(1000);
        cout << opp << endl;
        if (you.compare(opp) == 0) {
            cout << "Tie!" << endl;
            z++;
        }
        else if (you == "ROCK" && opp == "SCISSORS") {
            cout << "You win!" << endl;
            x++;
        }
        else if (you == "ROCK" && opp == "PAPER") {
            cout << "You lost!" << endl;
            y++;
        }
        else if (you == "PAPER" && opp == "ROCK") {
            cout << "You win!" << endl;
            x++;
        }
        else if (you == "PAPER" && opp == "SCISSORS") {
            cout << "You lost!" << endl;
            y++;
        }
        else if (you == "SCISSORS" && opp == "PAPER") {
            cout << "You win!" << endl;
            x++;
        }
        else if (you == "SCISSORS" && opp == "ROCK") {
            cout << "You lost!" << endl;
            y++;
        }
        Sleep(1000);
    }
    return 0;

}
