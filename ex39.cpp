#include <iostream>
#include <cctype>
#include <array>
using namespace std;

string numero;

void calcularNumeroDeAgencia(string n) {
    array<int, 4> numeros;
    string numero = "";
    for(int i = 0; n.size() > i; i++) {
        if(isdigit(n[i])) {
            numeros[i] = n[i] - '0';
            numero += n[i];
        }
    }
    int soma = (numeros[0] * 5) + (numeros[1] * 4) + (numeros[2] * 3) + (numeros[3] * 2);
    int res = 11 - (soma % 11);
    cout << "Seu numero de agencia eh " << numero << "-" << res;
}

int main() {
    cout << "Insira o os quatros primeiros numeros do seu numero de agnecia: ";
    cin >> numero;

    calcularNumeroDeAgencia(numero);
}
