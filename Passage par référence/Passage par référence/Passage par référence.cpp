//fonction raz transmise en argument par adresse
 
#include <iostream>

struct essai {
    int n;
    float x;
};

void raz(essai* e) {
    e->n = 0;
    e->x = 0.0f;
}

int main() {
    essai e1 = { 5, 3.14f };

    std::cout << "Avant raz (par adresse) : n = " << e1.n << ", x = " << e1.x << std::endl;

    raz(&e1);

    std::cout << "Après raz (par adresse) : n = " << e1.n << ", x = " << e1.x << std::endl;

    return 0;
}
