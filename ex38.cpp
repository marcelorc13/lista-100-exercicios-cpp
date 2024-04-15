#include <iostream>
using namespace std;

int ano;

void verificarAnoBissexto(int ano) {
    string res;
    if(ano % 4 == 0) {
        res = "O ano e Bissexto";
    }
    if(ano % 100 == 0) {
        res = "O ano NAO e Bissexto";
    }
    if(ano % 400 == 0) {
        res = "O ano e Bissexto";
    }
    cout << res;
}

int main() {
    cout << "Insira o ano que deseja saber se e Bissexto: ";
    cin >> ano;

    verificarAnoBissexto(ano);
}
