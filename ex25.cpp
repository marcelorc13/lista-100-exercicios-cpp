#include <iostream>
#include <vector>
using namespace std;

int numero;
vector<int> meses = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int diasDoMes(vector<int> arr, int n) {
    cout << "O numero do dias do mes " << n << " e igual a: " << arr[n-1];
}

int main() {
    cout << "Insira o numero do mes desejado: ";
    cin >> numero;

    if(numero >= 1 && numero <= 12) {
        diasDoMes(meses, numero);
    }
    else {
        cout << "Insira um numero de mes valido";
    }
}
