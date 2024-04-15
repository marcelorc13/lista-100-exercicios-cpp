#include <iostream>
using namespace std;

void calcularMedia(double n1, double n2, double n3, double n4, double n5) {
    double media = (n1 + n2 + n3 + n4 + n5) / 5;

    cout << media;
}

int main() {
    double nota1, nota2, nota3, nota4, nota5;
    cout << "Insira a Primeira nota: ";
    cin >> nota1;
    cout << "Insira a Segunda nota: ";
    cin >> nota2;
    cout << "Insira a Terceira nota: ";
    cin >> nota3;
    cout << "Insira a Quarta nota: ";
    cin >> nota4;
    cout << "Insira a Quinta nota: ";
    cin >> nota5;

    calcularMedia(nota1, nota2, nota3, nota4, nota5);
}
