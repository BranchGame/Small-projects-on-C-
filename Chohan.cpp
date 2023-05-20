#include <iostream>
#include <time.h>
#include <string>
using namespace std;



int main()
{
    srand(time(NULL));
    bool flag = true;
    
    while (flag == true) {
        system("cls");
        int bank = 5000;
        cout << "Cho-Han, by Al Sweigart al@inventwithpython.com " << endl << endl << "In this traditional Japanese dice game, two dice are rolled in a bamboo" << endl << "cup by the dealer sitting on the floor. The player must guess if the" << endl << "dice total to an even (cho) or odd (han) number." << endl << endl;
        cout << "You have " << bank << " mon. How much do you bet? (or QUIT)" << endl;
        string s;
        cout << "> ";
        cin >> s;
        int bid = 0;
        if (s == "QUIT") {
            return 0;
        }
        else {
            bid = stoi(s);
            bank -= bid;
        }
        cout << "The dealer swirls the cup and you hear the rattle of dice." << endl;
        cout << "The dealer slams the cup on the floor, still covering the dice and asks for your bet." << endl;
        int x = 1 + rand() % 6;
        int y = 1 + rand() % 6;
        string xx;
        string yy;
        if (x == 1) {
            xx += "ICHI";
        }
        if (x == 2) {
            xx += "NI";
        }
        if (x == 3) {
            xx += "SAN";
        }
        if (x == 4) {
            xx += "SHI";
        }
        if (x == 5) {
            xx += "GO";
        }
        if (x == 6) {
            xx += "ROKU";
        }
        if (y == 1) {
            yy += "ICHI";
        }
        if (y == 2) {
            yy += "NI";
        }
        if (y == 3) {
            yy += "SAN";
        }
        if (y == 4) {
            yy += "SHI";
        }
        if (y == 5) {
            yy += "GO";
        }
        if (y == 6) {
            yy += "ROKU";
        }
        cout << "CHO (even) or HAN (odd)?" << endl;
        string guess;
        cin >> guess;
        string correctBet;
        cout << xx << " - " << yy << endl;
        cout << x << " - " << y << endl;
        int correct = (x + y) % 2;
        if (correct == 0) {
            correctBet = "CHO";
        }
        else {
            correctBet = "HAN";
        }
        if (guess.compare(correctBet) == 0) {
            cout << "You won! You take " << bid * 2 << " mon." << endl;
            cout << "The house collects a " << bid * 0.1 << " mon fee." << endl;
            bank += (bid * 2) - (bid * 0.1);
            cout << "Now you have " << bank << " mon." << endl;
            cout << "Do you want play  again? (yes or no)" << endl;
            string ans;
            cin >> ans;
            if (ans == "yes") {
                break;
            }
            else {
                cout << "Thanks for playing!" << endl;
                flag = false;
            }
        }
        else {
            cout << "You lost!" << endl;
        }
        if (bank == 0) {
            cout << "You have run out of money!" << endl;
            cout << "Thanks for playing!" << endl;
            flag = false;
        }
    }
    

    return 0;
}