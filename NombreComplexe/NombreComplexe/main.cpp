#include "NombreComplexe.h"

int main()
{
    NombreComplexe* complexe = NombreComplexe::saisie();
    complexe->affiche();

    NombreComplexe autreComplexe(2.0, 3.0);
    NombreComplexe somme = complexe->addition(autreComplexe);
    std::cout << "Somme: ";
    somme.affiche();

    NombreComplexe produit = complexe->multiplication(autreComplexe);
    std::cout << "Produit: ";
    produit.affiche();

    delete complexe;

    return 0;
}
