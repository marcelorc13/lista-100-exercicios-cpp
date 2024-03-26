#include <iostream>
#include <math.h>
using namespace std;

int numero;

double calcularRaizQuadrada(int n) {
    return sqrt(n);
}

int main() {
    cout << "Insira o numero que voce deseja saber a raiz: ";
    cin >> numero;

    cout << "A raiz do numero " << numero << " e: " << calcularRaizQuadrada(numero);
}
