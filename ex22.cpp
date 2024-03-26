#include <iostream>
using namespace std;

int numero;

int exibirModulo(int n) {
    int res;
    if(n < 0) {
        res = n * -1;
    }
    else {
        res = n;
    }
}

int main() {
    cout << "Insira o numero que voce deseja saber o modulo: ";
    cin >> numero;

    cout << "O modulo do numero " << numero << " e " << exibirModulo(numero);
}
