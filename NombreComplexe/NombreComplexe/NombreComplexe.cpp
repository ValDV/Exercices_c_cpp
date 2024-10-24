#include <iostream>

class NombreComplexe {
private:
    double PartieReelle;
    double PartieImaginaire;

public:
    NombreComplexe(double partieReelle, double partieImaginaire);

    void affiche();
    static NombreComplexe* saisie();
    NombreComplexe addition(NombreComplexe& b);
    NombreComplexe multiplication(NombreComplexe& b);
};

int main()
{
    NombreComplexe* complexe = NombreComplexe::saisie();
    complexe->affiche();
    NombreComplexe autreComplexe(2.0, 3.0);
    NombreComplexe somme = complexe->addition(autreComplexe);
    somme.affiche();
    NombreComplexe produit = complexe->multiplication(autreComplexe);
    produit.affiche();

    delete complexe;

    return 0;
}
NombreComplexe::NombreComplexe(double partieReelle, double partieImaginaire)
{
    this->PartieReelle = partieReelle;
    this->PartieImaginaire = partieImaginaire;
}

void NombreComplexe::affiche()
{
    if (this->PartieReelle != 0) std::cout << this->PartieReelle;
    if (this->PartieImaginaire < 0) std::cout << this->PartieImaginaire;
    if (this->PartieImaginaire > 0) std::cout << "+" << this->PartieImaginaire;
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
