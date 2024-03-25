#include <iostream>
using namespace std;

double velocidade;

double transformarMsEmKmH(double v) {
    return v * 3.6;
}

int main() {
    cout << "Digite o valor em m/s: ";
    cin >> velocidade;

    cout << "A velocidade de " << velocidade << "m/s e igual a " << transformarMsEmKmH(velocidade) << "Km/h";
}
