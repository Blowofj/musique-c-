#ifndef INSTRUMENTS_HPP
#define INSTRUMENTS_HPP

#include <iostream>
using namespace std;

// Définition de la classe parents Instruments et des classes filles

class Instruments {
protected:
    string m_nom;
public:
    Instruments();
    virtual ~Instruments();
    string get_nom();
    virtual int Jouer();
};

class Piano : public Instruments {
public:
    Piano();
    int Jouer() override;
};

class Xylophone : public Instruments {
public:
    Xylophone();
    int Jouer() override;
};

class Guitare : public Instruments {
public:
    Guitare();
    int Jouer() override;
};

#endif
