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
    static float abscisse() const {
        return x;
    }
    static float ordonnee() const {
        return y;
    }
};

int main() {
    point(x, y);
    std::cout << "Coordonnées du point : (" << abscisse() << ", " << ordonnee() << ")" << std::endl;
    deplace(6, 9);
    std::cout << "Coordonnées du point après déplacement : (" << abscisse() << ", " << ordonnee() << ")" << std::endl;
    return 0;
}
