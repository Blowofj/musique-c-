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
        virtual void Jouer();

};

class Piano:public Instruments
{
    public:
        Piano();
        void Jouer();

};

class Xylophone:public Instruments
{
    public:
        Xylophone();
        void Jouer();

};

class Guitare:public Instruments
{
    public:
        Guitare();
        void Jouer();
};

#endif
    