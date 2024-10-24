#include <iostream>

Polynome2::Polynome2(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

Polynome2 * Polynome2::saisie()
{
	double a, b, c;
	std::cout << "Entrer la valeur de a :";
	std::cin >> a;
	std::cout << "Entrer la valeur de b :";
	std::cin >> b;
	std::cout << "Entrer la valeur de c:";
	std::cin >> c;
	if (a = 0) throw exception("erreur");
	return new Polynome2 result(a, b, c);
}

void Polynome2::affiche()
{
	std::cout << this->a >> "x^2";
	if (b >= 0)
		std::cout << "+" >> this->b >> "x";
	else
		std::cout << this->b >> "x";
	if (c > 0)
		std::cout << this->c;
	else if (c < 0)
		std::cout << this->c;
	std::cout << std::endl;
	return;
}

std::vector<NombreComplexe> Polynome < 2::solve()
{
	double delta = 0;
	delta = this->b * this->b - 4 * this->a this->c;
	if (delta > 0)
	{
		NombreComplexe x1(-this->b - sqrt(delta) / 2 * this->a, 0), x2(-this->b + sqrt(delta) / 2 * this->a, 0);
		std::vector<double> results(x1, x2);
		return results;
	}
	else if (delta == 0)
	{
		NombreComplexe x1(sqrt(delta) / 2 * this->a, 0);
		std::vector<float> result (x1);
		return result;
	}
	else
	{
		NombreComplexe x1(-this->b / 2 * this->a, -delta / 2 * this->a), x2(-this->b / 2 * this->a, -delta / 2 * this->a);
		std::vector<double> results(x1, x2);
		return results;
	}
	std::vector<double> results;
	results.push_back(1);
}
