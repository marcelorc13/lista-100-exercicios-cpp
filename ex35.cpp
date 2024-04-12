#include <iostream>
#include <array>
using namespace std;

int numero;
array<string, 7> dias = {"Domingo", "Segunda-Feira", "Terca-Feira", "Quarta-Feira", "Quinta-Feira", "Sexta-Feira", "Sabado"};

int verDiaDaSemana(int n, array<string, 7> dia) {
    if(n > 0 && n <= 7) {
        cout << "O dia " << n << " representa o dia de " << dia[n-1];
    }
    else {
        cout << "Insira um numero entre 1 e 7";
    }
}

int main() {
    cout << "Insira o numero: ";
    cin >> numero;

    verDiaDaSemana(numero, dias);
}
