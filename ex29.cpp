#include <iostream>
using namespace std;

int salario;

double calcularDesconto(double s) {
    double desconto = s * 0.11;
    if(desconto >= 334.29) {
        desconto = 334.29;
    }

    cout << "O valor do desconto previdenciario sera de: " << desconto;
}

int main() {
    cout << "Insira o salario: ";
    cin >> salario;

    calcularDesconto(salario);
}
