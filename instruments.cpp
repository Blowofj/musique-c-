#include "instruments.hpp"
#include <iostream>
#include <map>
#include <windows.h>
#include <conio.h>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

Instruments::Instruments()
{
    m_nom = "none";  
}

string Instruments::get_nom()
{
    return m_nom;
}

int Instruments::Jouer() {
    char x = 'w';
    bool f = false;
    float r;

    string tab[5][7] = {
        {"A-1","B-1","C-1","D-1","E-1","F-1","G-1"},
        {"A0","B0","C0","D0","E0","F0","G0"},
        {"A1","B1","C1","D1","E1","F1","G1"},
        {"A2","B2","C2","D2","E2","F2","G2"},
        {"A3","B3","C3","D3","E3","F3","G3"}
    };

    map<char, int> octaves = {{'w', 1}, {'x', 2}, {'c', 3}, {'v', 4}, {'b', 5}};
    map<char, string> association;

    association['a'] = tab[octaves[x]][0];
    association['z'] = tab[octaves[x]][1];
    association['e'] = tab[octaves[x]][2];
    association['r'] = tab[octaves[x]][3];
    association['t'] = tab[octaves[x]][4];
    association['y'] = tab[octaves[x]][5];
    association['u'] = tab[octaves[x]][6];

    cout << "choisissez le rythme en millisecondes ";
    cin >> r;
    cout << "changer la gamme en appuyant sur : w, x, c, v, b" << endl;
    cout << "choisissez la note en appuyant sur : a, z, e, r, t, y, u" << endl;

    while (!f) {
        if (_kbhit()) { // Vérifie si une touche est pressée
            char key = _getch(); // Récupère la touche pressée sans attendre Enter
            if (key == 'q') { // Sortir si l'utilisateur tape 'q'
                cout << "Fin du programme." << endl;
                f = true;
            } else if (association.find(key) != association.end()) {
                cout << association[key] << endl;
                Sleep(r);
            } else if (octaves.find(key) != octaves.end()) {
                // Changer la gamme
                association['a'] = tab[octaves[key]][0];
                association['z'] = tab[octaves[key]][1];
                association['e'] = tab[octaves[key]][2];
                association['r'] = tab[octaves[key]][3];
                association['t'] = tab[octaves[key]][4];
                association['y'] = tab[octaves[key]][5];
                association['u'] = tab[octaves[key]][6];
                cout << "vous avez changé de gamme" << endl;
            } else {
                cout << "entrée incorrecte" << endl;
            }
        }
    }
    return 0;
}

/** Piano **/

Piano::Piano()
{
    m_nom = "Piano";
}

int Piano::Jouer() {
    char x = 'w';
    bool f = false;
    float r;
    float notes[] = {32.7032, 36.7081, 41.2035, 43.6536, 48.9995, 55.0, 61.7354};  // Notes pour piano

    map<char, int> octaves = {{'w', 1}, {'x', 2}, {'c', 3}, {'v', 4}, {'b', 5}};
    map<char, float> association;

    association['a'] = notes[0];
    association['z'] = notes[1];
    association['e'] = notes[2];
    association['r'] = notes[3];
    association['t'] = notes[4];
    association['y'] = notes[5];
    association['u'] = notes[6];

    cout << "choisissez le rythme en millisecondes ";
    cin >> r;
    cout << "changer l'octave en appuyant sur : w, x, c, v, b" << endl;
    cout << "choisissez la note en appuyant sur : a, z, e, r, t, y, u" << endl;

    while (!f) {
        if (_kbhit()) {
            char key = _getch();
            if (key == 'q') {
                cout << "Fin du programme." << endl;
                f = true;
            } else if (association.find(key) != association.end()) {
                Beep(association[key] * 100, (int)r);
            } else if (octaves.find(key) != octaves.end()) {
                // Changer octave
                // Actualiser les notes selon l'octave
                // exemple : multiplier les fréquences par l'octave
                cout << "vous avez changé d'octave" << endl;
            } else {
                cout << "entrée incorrecte" << endl;
            }
        }
    }
    return 0;
}

/** Guitare **/

Guitare::Guitare()
{
    m_nom = "Guitare";
}

int Guitare::Jouer() {
    char x = 'w';
    bool f = false;
    float r;
    float notes[] = {82.4, 110.0, 146.8, 196.0, 246.9, 329.5};  // Notes pour guitare

    map<char, int> octaves = {{'w', 1}, {'x', 2}, {'c', 3}, {'v', 4}, {'b', 5}};
    map<char, float> association;

    association['a'] = notes[0];
    association['z'] = notes[1];
    association['e'] = notes[2];
    association['r'] = notes[3];
    association['t'] = notes[4];
    association['y'] = notes[5];

    cout << "choisissez le rythme en millisecondes ";
    cin >> r;
    cout << "changer l'octave en appuyant sur : w, x, c, v, b" << endl;
    cout << "choisissez la note en appuyant sur : a, z, e, r, t, y, u" << endl;

    while (!f) {
        if (_kbhit()) {
            char key = _getch();
            if (key == 'q') {
                cout << "Fin du programme." << endl;
                f = true;
            } else if (association.find(key) != association.end()) {
                Beep(association[key] * 100, (int)r);
            } else if (octaves.find(key) != octaves.end()) {
                cout << "vous avez changé d'octave" << endl;
            } else {
                cout << "entrée incorrecte" << endl;
            }
        }
    }
    return 0;
}

/** Xylophone **/

Xylophone::Xylophone()
{
    m_nom = "Xylophone";
}

int Xylophone::Jouer() {
    char x = 'w';
    bool f = false;
    float r;
    float notes[] = {1046.0, 1175.0, 1318.0, 1397.0, 1568.0};  // Notes pour xylophone

    map<char, int> octaves = {{'w', 1}, {'x', 2}, {'c', 3}, {'v', 4}, {'b', 5}};
    map<char, float> association;

    association['a'] = notes[0];
    association['z'] = notes[1];
    association['e'] = notes[2];
    association['r'] = notes[3];
    association['t'] = notes[4];

    cout << "choisissez le rythme en millisecondes ";
    cin >> r;
    cout << "changer l'octave en appuyant sur : w, x, c, v, b" << endl;
    cout << "choisissez la note en appuyant sur : a, z, e, r, t" << endl;

    while (!f) {
        if (_kbhit()) {
            char key = _getch();
            if (key == 'q') {
                cout << "Fin du programme." << endl;
                f = true;
            } else if (association.find(key) != association.end()) {
                Beep(association[key] * 100, (int)r);
            } else if (octaves.find(key) != octaves.end()) {
                cout << "vous avez changé d'octave" << endl;
            } else {
                cout << "entrée incorrecte" << endl;
            }
        }
    }
    return 0;
}
Instruments::~Instruments() {
    
}
