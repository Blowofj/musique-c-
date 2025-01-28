#include <iostream>
#include <map>
#include <windows.h>
#include <conio.h>
#include <string>
#include <fstream>
#include <sstream>


using namespace std;

int main() {
    char x;
    char y;
    bool f;
    float r;
    string tab [5][7] = {
    {"A-1","B-1","C-1","D-1","E-1","F-1","G-1"},
    {"A0","B0","C0","D0","E0","F0","G0"},
    {"A1","B1","C1","D1","E1","F1","G1"},
    {"A2","B2","C2","D2","E2","F2","G2"},
    {"A3","B3","C3","D3","E3","F3","G3"}
    };

    x = 'w';

    map<char, int> gammes; 
    gammes['w'] = 1;
    gammes['x'] = 2;
    gammes['c'] = 3;
    gammes['v'] = 4;
    gammes['b'] = 5;

    map<char, string> association;
    association['a'] = tab[gammes[x]][0];
    association['z'] = tab[gammes[x]][1];
    association['e'] = tab[gammes[x]][2];
    association['r'] = tab[gammes[x]][3];
    association['t'] = tab[gammes[x]][4];
    association['y'] = tab[gammes[x]][5];
    association['u'] = tab[gammes[x]][6];

    cout << "choisissez le rythme en millisecondes ";
    cin >> r; 
    cout << "changer la gamme en appuyant sur : w, x, c, v, b" << endl;
    cout << "choisissez la note en appuyant sur : a, z, e, r, t, y, u" << endl;

    while ( !f ) {
        if (_kbhit()) { // Vérifie si une touche est pressée
            char key = _getch(); // Récupère la touche pressée sans attendre Enter
            if (key == 'q') { // Sortir si l'utilisateur tape 'q'
                cout << "Fin du programme." << endl;
                f = true;
            } else if (key == 'a'|| key == 'z' || key == 'e' || key == 'r' || key == 't' || key == 'y' || key == 'u') {
                cout << association[key] << endl;
                Sleep(r);
            } else if (key == 'w'|| key == 'x' || key == 'c' || key == 'v' || key == 'b'){      
            association['a'] = tab[gammes[key]][0];
            association['z'] = tab[gammes[key]][1];
            association['e'] = tab[gammes[key]][2];
            association['r'] = tab[gammes[key]][3];
            association['t'] = tab[gammes[key]][4];
            association['y'] = tab[gammes[key]][5];
            association['u'] = tab[gammes[key]][6];
                cout << "vous avez changer de gamme" << endl;
            } else {
                cout << "entree incorrecte" << endl;
            }
        }
    }
    return 0;
};


