#include <iostream>
using namespace std;

int numero;

string parOuImpar(int n) {
    string res = "";

    if(n % 2 == 0) {
        res = "Par";
    }
    else {
        res = "Impar";
    }
    return res;
}

int main() {
    cout << "Insira seu numero: ";
    cin >> numero;

    cout << "O numero " << numero << " e " << parOuImpar(numero);
}
