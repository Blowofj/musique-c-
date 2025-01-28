#ifndef MUSIC
#define MUSIC

#include <iostream>
using namespace std;

class Instruments
{
    private:
        string m_nom;
        string m_rythme;
    public: 
        Instruments();
        string get_nom();
        virtual int Jouer();

};

class Piano:public Instruments
{
    public:
        Piano();
        int Jouer();

};

class Xylophone:public Instruments
{
    public:
        Xylophone();
        int Jouer();

};

class Guitare:public Instruments
{
    public:
        Guitare();
        int Jouer();
};

#endif
    