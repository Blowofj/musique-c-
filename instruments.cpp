#include "instruments.hpp"
#include <windows.h> 
#include <conio.h>  
 

void jouerNotes();

int main() {
    char choixInstrument;

    std::cout << "Bienvenue dans le simulateur musical !\n";
    std::cout << "Choisissez un instrument :\n";
    std::cout << "1. Piano\n";
    std::cout << "2. Guitare\n";
    std::cout << "3. Batterie\n";
    std::cout << "Appuyez sur une touche pour faire votre choix...\n";

    choixInstrument = _getch(); // Capture l'entrée utilisateur pour le choix

    switch (choixInstrument) {
        case '1':
            std::cout << "Vous avez choisi : Piano\n";
            break;
        case '2':
            std::cout << "Vous avez choisi : Guitare\n";
            break;
        case '3':
            std::cout << "Vous avez choisi : Batterie\n";
            break;
        default:
            std::cout << "Choix invalide ! Par défaut, Piano est sélectionné.\n";
            choixInstrument = '1';
            break;
    }

    std::cout << "Appuyez sur 'Q' pour quitter.\n";
    jouerNotes();
    return 0;
}

void jouerNotes() {
    while (true) {
     
        if (GetAsyncKeyState('A') & 0x8000) {
            std::cout << "Note jouée : Do\n";
            Sleep(200); 
        }
        if (GetAsyncKeyState('B') & 0x8000) {
            std::cout << "Note jouée : Ré\n";
            Sleep(200);
        }
        if (GetAsyncKeyState('C') & 0x8000) {
            std::cout << "Note jouée : Mi\n";
            Sleep(200);
        }
        if (GetAsyncKeyState('D') & 0x8000) {
            std::cout << "Note jouée : Fa\n";
            Sleep(200);
        }

        if (GetAsyncKeyState('E') & 0x8000) {
            std::cout << "Note jouée : Sol\n";
            Sleep(200);
        }

        if (GetAsyncKeyState('F') & 0x8000) {
            std::cout << "Note jouée : La\n";
            Sleep(200);
        }

        if (GetAsyncKeyState('G') & 0x8000) {
            std::cout << "Note jouée : Si\n";
            Sleep(200);
        }

        if (GetAsyncKeyState('Q') & 0x8000) {
            std::cout << "Au revoir !\n";
            break;
        }

        Sleep(10); 
    }
}