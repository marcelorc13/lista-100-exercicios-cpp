#include <iostream>
using namespace std;

int numero;

string inverterNumero(int n) {
    string valor = to_string(n);
    string res = "";
    for(int i = 0; i < valor.length(); i++) {
        res = valor[i] + res;
    }
    return res;
}

int main() {
   cout << "Insira o numero: ";
   cin >> numero;

   cout << "O numero " << numero << " invertido e: " << inverterNumero(numero); 
}
