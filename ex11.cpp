#include <iostream>
using namespace std;

double nota1b1, nota2b1, nota1b2, nota2b2;

double calcularMediaSemestral(double n1b1, double n2b1, double n1b2, double n2b2) {
    return (n1b1 + n2b1 + n1b2 + n2b2) / 4;
}

int main() {
    cout << "Insira a primeira nota do primeiro bimestre: ";
    cin >> nota1b1;
    cout << "Insira a segunda nota do primeiro bimestre: ";
    cin >> nota2b1;
    cout << "Insira a primeira nota do segundo bimestre: ";
    cin >> nota1b2;
    cout << "Insira a segunda nota do segundo bimestre: ";
    cin >> nota2b2;

    cout << "Sua media semestral e: " << calcularMediaSemestral(nota1b1, nota2b1, nota1b2, nota2b2);
}
