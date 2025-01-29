#include <iostream>
#include "Instruments.hpp"  

using namespace std;

int main() {
    int choix;
    cout << "voulez vous jouer des notes (1) ou bien lire un morceau (2) :" << endl; 
    cin >> choix;
    if (choix == 1){
    Instruments monInstrument;

    monInstrument.Jouer();

    } else {
        return 0;
    }


    return 0;
}
