#include "NombreComplexe.h"

NombreComplexe::NombreComplexe(double partieReelle, double partieImaginaire)
{
	this->PartieReelle = partieReelle;
	this->PartieImaginaire = partieImaginaire;
}

void NombreComplexe::affiche()
{
	std::cout << PartieReelle << "+" << PartieImaginaire << "i";
}

NombreComplexe* NombreComplexe::saisie()
{
	NombreComplexe* result;

	return result;
}

