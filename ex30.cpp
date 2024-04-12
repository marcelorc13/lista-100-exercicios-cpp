#include <iostream>
using namespace std;

int litros;

double calcularPrecoGasolinaEAlcool(double l) {
    double alcool, gasolina;  
    alcool = l * 1.9;
    gasolina = l * 2.7;
    if(l <= 25) {
        alcool -= (alcool * 0.02);
        gasolina -= (gasolina * 0.03);
    }
    else {
        alcool -= (alcool * 0.04);
        gasolina -= (gasolina * 0.05);
    }
    cout << "O valor da gasolina sera de " << gasolina << "R$ e o valor do alcool sera de " << alcool << "R$";
}

int main() {
    cout << "Insira o valor de gasolina / alcool em litros: ";
    cin >> litros;

    calcularPrecoGasolinaEAlcool(litros);
}
