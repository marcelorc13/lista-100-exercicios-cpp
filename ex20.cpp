#include <iostream>
using namespace std;

double valor;

double calcularEntradaEPrestacoes(double v) {
    double entrada;
    int parcelas = v / 3;

    if(parcelas * 3 == v) {
        entrada = parcelas;
    }
    else {
        entrada = parcelas + (v - (parcelas * 3));
    }

    cout << "O valor da entrada sera " << entrada << " e tera 2 parcelas de " << parcelas;
}

int main() {
    cout << "Insira o valor para parcelar: ";
    cin >> valor;

    calcularEntradaEPrestacoes(valor);
}
