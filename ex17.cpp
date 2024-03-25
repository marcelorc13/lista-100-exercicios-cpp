#include <iostream>
#include <array>

using namespace std;

int valor;
array <int, 7> notas;

int distribuirNotas(int v, array <int, 7>& arr) {
    while (v > 0) {
        if (v >= 100){
            arr[0] += 1;
            v -= 100;
        }
        else if (v >= 50){
            arr[1] += 1;
            v -= 50;
        }
        else if (v >= 20){
            arr[2] += 1;
            v -= 20;
        }
        else if (v >= 10){
            arr[3] += 1;
            v -= 10;
        }
        else if (v >= 5){
            arr[4] += 1;
            v -= 5;
        }
        else if (v >= 2){
            arr[5] += 1;
            v -= 2;
        }
        else if (v >= 1){
            arr[6] += 1;
            v -= 1;
        }
    }

    return 0;
}

int main() {
    cout << "Insira o valor de saque desejado: ";
    cin >> valor;

    distribuirNotas(valor, notas);

    cout << "Voce recebera " << (notas[0] != 0 ? to_string(notas[0]) + " Nota(s) de 100 \n" : "") << (notas[1] != 0 ? to_string(notas[1]) + " Nota(s) de 50 \n" : "") << (notas[2] != 0 ? to_string(notas[2]) + " Nota(s) de 20 \n" : "") << (notas[3] != 0 ? to_string(notas[3]) + " Nota(s) de 10 \n" : "") << (notas[4] != 0 ? to_string(notas[4]) + " Nota(s) de 5 \n" : "") << (notas[5] != 0 ? to_string(notas[5]) + " Nota(s) de 2 \n" : "") << (notas[6] != 0 ? to_string(notas[6]) + " Nota(s) de 1 \n" : "");
}
