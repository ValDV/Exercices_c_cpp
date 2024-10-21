#include <iostream>

class point {
private:
    int x, y;
    point::point()
    {
        x = 2;
        y = 3;
    }
}

public:
{
    void deplace(float dx, float dy) {
        x += dx;
        y += dy;
    }
    void point::affiche()
    {
        std::cout << "Coordonnées du point : (" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    point(x, y);
    affiche();
    deplace(6, 9);
    affiche();
    return 0;
}
