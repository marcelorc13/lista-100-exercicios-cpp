#include <iostream>
using namespace std;

double resistencia1, resistencia2, resistencia3;

double calcularResistencia(double r1, double r2, double r3) {
    return (1/(1/r1 + 1/r2)) + r3;
}

int main() {
    cout << "Insira o valor da Primeira Resistencia: ";
    cin >> resistencia1;
    cout << "Insira o valor da Segunda Resistencia: ";
    cin >> resistencia2;
    cout << "Insira o valor da Terceira Resistencia: ";
    cin >> resistencia3;

    cout << "A resistencia equivalente entre as resistencias " << resistencia1 << ", " << resistencia2 << " e " << resistencia3 << " e de " << calcularResistencia(resistencia1, resistencia2, resistencia3);
}
