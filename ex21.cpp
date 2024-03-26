#include <iostream>
using namespace std;

int numero;

string positivoOuNegativo(int n) {
    string res = "";

    if(n >= 0) {
        res = "O numero e positivo";
    } 
    else {
        res = "O numero e negativo";
    }

    return res;
}

int main() {
    cout << "Insira o numero desejado: ";
    cin >> numero;

    cout << positivoOuNegativo(numero);
}
