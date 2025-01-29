#include <iostream>
#include <map>
#include <windows.h>
#include <conio.h>
#include <string>
#include <fstream>
#include <sstream>


using namespace std;
/*
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
*/


int main() {

    string route;
    string ligne;
    string note;
    float rythme;
    
 map<string, int> note_to_frequency = {
        {"B0", 31}, {"C1", 33}, {"C#1", 35}, {"D1", 37}, {"D#1", 39}, {"E1", 41}, {"F1", 44}, 
        {"F#1", 46}, {"G1", 49}, {"G#1", 52}, {"A1", 55}, {"A#1", 58}, {"B1", 62}, {"C2", 65}, 
        {"C#2", 69}, {"D2", 73}, {"D#2", 78}, {"E2", 82}, {"F2", 87}, {"F#2", 93}, {"G2", 98}, 
        {"G#2", 104}, {"A2", 110}, {"A#2", 117}, {"B2", 123}, {"C3", 131}, {"C#3", 139}, 
        {"D3", 147}, {"D#3", 156}, {"E3", 165}, {"F3", 175}, {"F#3", 185}, {"G3", 196}, 
        {"G#3", 208}, {"A3", 220}, {"A#3", 233}, {"B3", 247}, {"C4", 262}, {"C#4", 277}, 
        {"D4", 294}, {"D#4", 311}, {"E4", 330}, {"F4", 349}, {"F#4", 370}, {"G4", 392}, 
        {"G#4", 415}, {"A4", 440}, {"A#4", 466}, {"B4", 494}, {"C5", 523}, {"C#5", 554}, 
        {"D5", 587}, {"D#5", 622}, {"E5", 659}, {"F5", 698}, {"F#5", 740}, {"G5", 784}, 
        {"G#5", 831}, {"A5", 880}, {"A#5", 932}, {"B5", 988}, {"C6", 1047}, {"C#6", 1109}, 
        {"D6", 1175}, {"D#6", 1245}, {"E6", 1319}, {"F6", 1397}, {"F#6", 1480}, {"G6", 1568}, 
        {"G#6", 1661}, {"A6", 1760}, {"A#6", 1865}, {"B6", 1976}, {"C7", 2093}, {"C#7", 2217}, 
        {"D7", 2349}, {"D#7", 2489}, {"E7", 2637}, {"F7", 2794}, {"F#7", 2960}, {"G7", 3136}, 
        {"G#7", 3322}, {"A7", 3520}, {"A#7", 3729}, {"B7", 3951}, {"C8", 4186}, {"C#8", 4435}, 
        {"D8", 4699}, {"D#8", 4978}
    };

    cout << "entrer la route vers votre fichier" << endl;
    cin >> route; 

    ifstream fichier(route);
    
    
    if (!fichier) {
        cerr << "Erreur lors de l'ouverture du fichier !" << endl;
        return 1;
    }
    
        while (getline(fichier, ligne)) {
            stringstream ss(ligne); 
            ss >> note >> rythme; 
            rythme = rythme*1000;
            Beep(note_to_frequency[note], rythme);
                if (rythme < 200) { // Ajuster une durée minimale pour rendre le son audible
                rythme = 200;
                 }
            cout << note_to_frequency[note] << " " << rythme << endl;
        }

    fichier.close();
    return 0;
}

