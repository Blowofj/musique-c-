#include "instruments.hpp"

/** Instruments **/

Instruments::Instruments()
{
	string m_notes = "none";
};

string Instruments::get_notes()
{
	return m_notes;
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

};