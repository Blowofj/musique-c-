#include "instruments.hpp"

/** Instruments **/

Instruments::Instruments()
{
	string m_nom = "none";
};

string Instruments::get_nom()
{
	return m_nom;
};

void Instruments::Jouer()
{

};

/** Piano **/

Piano::Piano(): Instruments
{

};

void Piano::Jouer()
{
	cout <<"Vous avez " << get_nom() << "Notes : " << note << endl;
	l
};