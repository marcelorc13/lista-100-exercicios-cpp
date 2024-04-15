#include <iostream>
#include <vector>
using namespace std;

int tipoDePulverizacao;
double area;

void calcularCusto(int tipoDePulverizacao, double area) {
    vector<int> valores = {50, 100, 150, 250};

    double valorTotal = area * valores[tipoDePulverizacao - 1];

    if(area > 1000) {
        valorTotal *= 0.95;
    }
    if(valorTotal > 750) {
        valorTotal = 750 + ((valorTotal - 750) * 0.9); 
    }
    
    cout << valorTotal;
}

int main() {
    cout << "Inisira o tipo de pulverizacao: ";
    cin >> tipoDePulverizacao;

    cout << "Insira a area em acres: ";
    cin >> area;

    calcularCusto(tipoDePulverizacao, area);
}
