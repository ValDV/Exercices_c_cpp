#include "NombreComplexe.h"

NombreComplexe::NombreComplexe(double partieReelle, double partieImaginaire)
{
    this->PartieReelle = partieReelle;
    this->PartieImaginaire = partieImaginaire;
}

void NombreComplexe::affiche()
{
    if (this->PartieReelle != 0) std::cout << this->PartieReelle;
    if (this->PartieImaginaire < 0) std::cout << this->PartieImaginaire << "i";
    if (this->PartieImaginaire > 0) std::cout << "+" << this->PartieImaginaire << "i";
    std::cout << std::endl;
}

NombreComplexe* NombreComplexe::saisie()
{
    double PartieReelle, PartieImaginaire;
    std::cout << "Entrer la partie reelle :" << std::endl;
    std::cin >> PartieReelle;
    std::cout << "Entrer la partie imaginaire :" << std::endl;
    std::cin >> PartieImaginaire;

    return new NombreComplexe(PartieReelle, PartieImaginaire);
}

NombreComplexe NombreComplexe::addition(NombreComplexe& b)
{
    double nouvellePartieReelle = this->PartieReelle + b.PartieReelle;
    double nouvellePartieImaginaire = this->PartieImaginaire + b.PartieImaginaire;

    return NombreComplexe(nouvellePartieReelle, nouvellePartieImaginaire);
}

NombreComplexe NombreComplexe::multiplication(NombreComplexe& b)
{
    double nouvellePartieReelle = this->PartieReelle * b.PartieReelle - this->PartieImaginaire * b.PartieImaginaire;
    double nouvellePartieImaginaire = this->PartieReelle * b.PartieImaginaire + this->PartieImaginaire * b.PartieReelle;

    return NombreComplexe(nouvellePartieReelle, nouvellePartieImaginaire);
}
