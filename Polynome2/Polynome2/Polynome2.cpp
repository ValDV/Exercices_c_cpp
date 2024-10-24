#include <iostream>
#include <cmath>
#include <vector>

class Polynome2 {
private:
    double a, b, c;

public:
    Polynome2(double a, double b, double c);
    Polynome2* saisie();
    void affiche();
    std::vector<double> solve();
};

Polynome2::Polynome2(double a, double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

int main() {
    Polynome2* polynome = nullptr;

    while (polynome == nullptr) {
        polynome = Polynome2(1, -3, 2).saisie();
    }

    polynome->affiche();

    std::vector<double> solutions = polynome->solve();

    if (!solutions.empty()) {
        std::cout << "Nombre de solutions : " << solutions.size() << std::endl;
        for (size_t i = 0; i < solutions.size(); ++i) {
            std::cout << "Solution " << i + 1 << " : " << solutions[i] << std::endl;
        }
    }

    return 0;
}

Polynome2* Polynome2::saisie()
{
    double a, b, c;
    std::cout << "Entrer la valeur de a : ";
    std::cin >> a;
    std::cout << "Entrer la valeur de b : ";
    std::cin >> b;
    std::cout << "Entrer la valeur de c : ";
    std::cin >> c;

    if (a == 0) {
        std::cout << "Erreur : 'a' ne doit pas etre egal a 0." << std::endl;
        return nullptr;
    }

    return new Polynome2(a, b, c);
}

void Polynome2::affiche()
{
    std::cout << this->a << "x^2";
    if (b >= 0)
        std::cout << "+" << this->b << "x";
    else
        std::cout << this->b << "x";

    if (c > 0)
        std::cout << "+" << this->c;
    else if (c < 0)
        std::cout << this->c;

    std::cout << std::endl;
}

std::vector<double> Polynome2::solve()
{
    double delta = this->b * this->b - 4 * this->a * this->c;

    if (delta > 0) {
        double x1 = (-this->b - sqrt(delta)) / (2 * this->a);
        double x2 = (-this->b + sqrt(delta)) / (2 * this->a);
        return { x1, x2 };
    }
    else if (delta == 0) {
        double x1 = -this->b / (2 * this->a);
        return { x1 };
    }
    else {
        std::cout << "Pas de solutions reelles." << std::endl;
        return {};
    }
}
