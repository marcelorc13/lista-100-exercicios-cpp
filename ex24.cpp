#include <iostream>
#include <array>
using namespace std;

string mostrarMaior(array<int, 3> arr) {
    string res = "";  
    int maior = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > maior) {
            maior = arr[i];
            res = to_string(maior);
        }
    }
    return res;
}

int main() {
    int numero1, numero2, numero3;

    cout << "Insira o primeiro numero: ";
    cin >> numero1;
    cout << "Insira o segundo numero: ";
    cin >> numero2;
    cout << "Insira o terceiro numero: ";
    cin >> numero3;

    array<int, 3> lista = {numero1, numero2, numero3};

    cout << "O maior numero entro os numeros " << numero1 << ", " << numero2 << " e " << numero3 << " e igual a: " << mostrarMaior(lista);
    }
