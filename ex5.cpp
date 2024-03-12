#include <iostream>
using namespace std;

int numero;

int exibirSucessor(int n) {
    return n + 1;
}

int main() {
    cout << "Insira o numero inteiro de sua escolha: ";
    cin >> numero;

    cout << "O sucessor do numero " << numero << " e " << exibirSucessor(numero);
}
