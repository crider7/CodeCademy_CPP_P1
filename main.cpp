#include <iostream>

int main() {
    double pesos;
    double reais;
    double soles;
    double dollars;

    dollars = (0.00032 * pesos) + (0.27 * reais) + (0.3 * soles);

    std::cout << "Enter number of Colombian Pesos: \n";
    std::cin >> pesos;
    std::cout << "Enter number of Brazilian Reais: \n";
    std::cin >> reais;
    std::cout << "Enter number of Peruvian Soles: \n";
    std::cin >> soles;

    std::cout << "US Dollars = $" << dollars << "\n";
}
