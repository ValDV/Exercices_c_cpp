#include <iostream>
using namespace std;

class pile_entier {
private:
    int* pile;
    int taille;
    int hauteur;

public:
    pile_entier(int taille_max = 20) {
        taille = taille_max;
        pile = new int[taille];
        hauteur = 0;
        cout << "Pile créée avec taille maximale de " << taille << endl;
    }

    ~pile_entier() {
        delete[] pile;
        cout << "Pile détruite." << endl;
    }

    void empile(int val) {
        if (pleine()) {
            cout << "La pile est pleine, impossible d'empiler." << endl;
        }
        else {
            pile[hauteur++] = val;
            cout << "Empilé: " << val << endl;
        }
    }

    int depile() {
        if (vide()) {
            cout << "La pile est vide, impossible de dépiler." << endl;
            return -1;
        }
        else {
            return pile[--hauteur];
        }
    }

    int pleine() {
        return hauteur == taille;
    }

    int vide() {
        return hauteur == 0;
    }

    void affichePile() {
        if (vide()) {
            cout << "La pile est vide." << endl;
        }
        else {
            cout << "Pile: ";
            for (int i = 0; i < hauteur; ++i) {
                cout << pile[i] << " ";
            }
            cout << endl;
        }
    }
};

void testPile() {
    pile_entier pile(50);

    pile.empile(10);
    pile.empile(20);
    pile.empile(30);
    pile.empile(40);
    pile.empile(50);

    pile.affichePile();

    cout << "Tentative d'empiler un élément supplémentaire:" << endl;
    pile.empile(60);

    cout << "Dépilement: " << pile.depile() << endl;
    cout << "Dépilement: " << pile.depile() << endl;

    pile.afficherPile();

    cout << "Dépilement: " << pile.depile() << endl;
    cout << "Dépilement: " << pile.depile() << endl;
    cout << "Dépilement: " << pile.depile() << endl;

    cout << "Tentative de dépiler de nouveau:" << endl;
    pile.depile();
}

int main() {
    testPile();
    return 0;
}
