#include <iostream>

double ladoDoQuadrado;

double calcularAreaQuadrado(double l) {
    return l * l;
}

double calcularPerimetroQuadrado(double l) {
    return l * 4;
}

int main() {
    std::cout << "Insira o Lado do Quadrado: ";
    std::cin >> ladoDoQuadrado;

    std:: cout << "A area do quadrado e: " << calcularAreaQuadrado(ladoDoQuadrado) << "\n O perimetro do quadrado e: " << calcularPerimetroQuadrado(ladoDoQuadrado);
}