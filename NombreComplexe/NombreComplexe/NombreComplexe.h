#ifndef NOMBRECOMPLEXE_H
#define NOMBRECOMPLEXE_H

#include <iostream>

class NombreComplexe {
private:
    double PartieReelle;
    double PartieImaginaire;

public:
    NombreComplexe(double partieReelle = 0.0, double partieImaginaire = 0.0);

    void affiche();
    static NombreComplexe* saisie();
    NombreComplexe addition(NombreComplexe& b);
    NombreComplexe multiplication(NombreComplexe& b);
};

#endif