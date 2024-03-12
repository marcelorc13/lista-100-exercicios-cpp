#include <iostream>

double raio;

double calcularArea(double r) {
    return (r*r) * 3.14;
}
double calcularPerimetro(double r) {
    return 2 * 3.14 * r;
}

int main() {
    std::cout << "Insira o Raio da sua circunferencia: ";
    std::cin >> raio;

    std::cout << "A area do circulo e: " << calcularArea(raio) << "\n O perimetro e: " << calcularPerimetro(raio);
}