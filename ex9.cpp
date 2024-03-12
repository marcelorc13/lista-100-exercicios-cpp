#include <iostream>
using namespace std;

double altura, raio;

double calcularVolume(double h, double r) {
    return 3.14 * (r * r) * h;
}

int main() {
    cout << "Insira a altura da lata: ";
    cin >> altura;

    cout << "Insira o raio da lata: " ;
    cin >> raio;

    cout << "Em uma lata com a altura de " << altura << "cm e um raio de " << raio << "cm, seu volume sera de: " << calcularVolume(altura, raio) << "cm cubicos";
}
