//fonction raz transmise en argument par référence

#include <iostream>

struct essai {
    int n;
    float x;
};

void raz(essai& e) {
    e.n = 0;
    e.x = 0.0f;
}

int main() {
    essai e2 = { 10, 6.28f };

    std::cout << "Avant raz (par référence) : n = " << e2.n << ", x = " << e2.x << std::endl;

    raz(e2);

    std::cout << "Après raz (par référence) : n = " << e2.n << ", x = " << e2.x << std::endl;

    return 0;
}
