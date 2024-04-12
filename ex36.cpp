#include <iostream>
using namespace std;

double nota1, nota2, nota3, nota4, nota5;

void avaliarExames(double n1, double n2, double n3, double n4, double n5) {
    if(n1 >= 70 && n2 >= 70 && n3 >= 70 && n4 >= 70 && n5 >= 70) {
        cout << " Voce foi aprovado e sua nota e A";
    }
    else if(n1 >= 70 && n2 >= 70 && n4 >= 70 && ( n3 <= 70 || n5 <= 70)) {
        cout << " Voce foi aprovado e sua nota e B";
    }
    else if(n1 >= 70 && n2 >= 70 && ( n3 >= 70 || n4 >= 70) && n5 <= 70) {
        cout << " Voce foi aprovado e sua nota e C";
    }
    else {
        cout << "Voce esta reprovado!";
    }
}

int main() {
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

    avaliarExames(nota1, nota2, nota3, nota4, nota5);
}
