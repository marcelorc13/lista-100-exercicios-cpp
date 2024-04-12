#include <iostream>
using namespace std;

double rendaMensal, valorTotal;
int numeroDePrestacoes;

void calcularValorDeEmprestimo(double rendaMensal, double valorTotal, int numeroDePrestacoes) {
    double valorPrestacao = valorTotal / numeroDePrestacoes;
    if(valorTotal < (rendaMensal * 10) && valorPrestacao <= (rendaMensal * 0.3)) {
        cout << "O emprestimo pode ser concedido";
    }
    else {
        cout << "O emprestimo nao pode ser concedido";
    }
}

int main() {
    cout << "Insira sua renda mensal: ";
    cin >> rendaMensal;

    cout << "Insira o valor total desejado do emprestimo: ";
    cin >> valorTotal;

    cout << "Insira o numero de prestacoes desejado: ";
    cin >> numeroDePrestacoes;

    calcularValorDeEmprestimo(rendaMensal, valorTotal, numeroDePrestacoes);
}
