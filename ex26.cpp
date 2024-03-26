#include <iostream>
#include <array>
using namespace std;

int numero1, numero2, numero3;

int somarDoisMaiores(array<int, 3> arr) {
    int maior1 = 0;
    int maior2 = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > maior1) {
            maior2 = maior1;
            maior1 = arr[i];
        }
        else if(arr[i] > maior2) {
            maior2 = arr[i];
        }
    }
    int res = maior1 + maior2;
    cout << "O maior numero e: " << maior1 << " e o segundo maior e: " << maior2 << endl;
    cout << "Logo a soma entre eles e: " << res;
}

int main() {
    cout << "Insira o primeiro numero: ";
    cin >> numero1;
    cout << "Insira o segundo numero: ";
    cin >> numero2;
    cout << "Insira o terceiro numero: ";
    cin >> numero3;

    array<int, 3> lista = {numero1, numero2, numero3};

    somarDoisMaiores(lista);
}
