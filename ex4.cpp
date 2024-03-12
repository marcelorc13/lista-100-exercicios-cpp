#include <iostream>
using namespace std;

double lado1, lado2, lado3;

double calcularPerimetroTriangulo(double l1, double l2, double l3) {
    return l1 + l2 + l3;
}

int main() {
    cout << "Insira o primeiro Lado do Triangulo: ";
    cin >> lado1;

    cout << "Insira o segundo Lado do Triangulo: ";
    cin >> lado2;

    cout << "Insira o terceiro Lado do Triangulo: ";
    cin >> lado3;

    cout << "O perimetro de um triangulo de lado " << lado1 << ", " << lado2 << " e " << lado3 << " e igual a " << calcularPerimetroTriangulo(lado1, lado2, lado3);
}