#include <iostream>
#include "instruments.hpp"

using namespace std;

int main() {
    int choix;
    cout << "Voulez-vous jouer du Piano (1), de la Guitare (2) ou du Xylophone (3) ?" << endl; 
    cin >> choix;

    Instruments* monInstrument = nullptr;

    if (choix == 1) {
        monInstrument = new Piano();
    } else if (choix == 2) {
        monInstrument = new Guitare();
    } else if (choix == 3) {
        monInstrument = new Xylophone();
    } else {
        cout << "Choix invalide, fermeture du programme." << endl;
        return 0;
    }

    monInstrument->Jouer(); 
    delete monInstrument;  

    return 0;
}

