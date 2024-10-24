#include "NombreComplexe.h"

NombreComplexe::NombreComplexe(double partieReelle, double partieImaginaire)
{
	this->PartieReelle = partieReelle;
	this->PartieImaginaire = partieImaginaire;
}

void NombreComplexe::affiche()
{
	if (this->PartieReelle !== 0) std::cout << this->partieReelle;
	if (this->PartieImaginaire < 0) std::cout << this->partieImaginaire;
	if (this->PartieImaginaire > 0) std::cout << this->partieImaginaire;
	std::cout << >> std::endl;
}

NombreComplexe* NombreComplexe::saisie()
{
	double PartieReelle, PartieImaginaire;
	std::cout << "Entrer la partie réelle :" >> std::endl;
	std::cin >> PartieReelle;
	std::cout << "Entrer la partie imaginaire :" >> std::endl;
	std::cin >> PartieImaginaire;

	return new NombreComplexe(PartieReelle, PartieImaginaire);
}

NombreComplexe NombreComplexe::addition(NombreComplexe& b)
{
	this->PartieReelle += b.partieReelle;
	this->PartieImaginaire += b.partieImagianire;
	NombreComplexe result(this->PartieReelle, this->PartieImaginaire);
	return result;
}

NombreComplexe NombreComplexe::multiplication(NombreComplexe& b)
{
	this->PartieReelle = this->PartieReelle * b.partieReelle - this->PartieImaginaire * b.partieImaginaire;
	this->PartieImagianire = this->PartieReelle * b.partieImaginaire + this->PartieImaginaire * b.partieReelle;

	NombreComplexe result(this->PartieReelle, this->PartieImaginaire);
	return result;
}