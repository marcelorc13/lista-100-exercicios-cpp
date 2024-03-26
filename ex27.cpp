#include <iostream>
#include <array>
using namespace std;

int numero1, numero2, numero3;

double calcularMedia(array <int, 3> arr) {
    int maior1 = 0;
    int maior2 = 0;
    int maior3 = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > maior1) {
            maior3 = maior2;
            maior2 = maior1;
            maior1 = arr[i];
        }
        else if(arr[i] > maior2) {
            maior3 = maior2;
            maior2 = arr[i];
        }
        else {
            maior3 = arr[i];
        }
    }
    double res = (maior1 * 5 + maior2 * 2.5 + maior3 * 2.5) / ( 5 + 2.5 + 2.5);
    cout << "A media ponderada entre " << maior1 << ", " << maior2 << " e " << maior3 << " e igual a " << res;
}

int main() {
    cout << "Insira o primeiro numero: ";
    cin >> numero1;
    cout << "Insira o segundo numero: ";
    cin >> numero2;
    cout << "Insira o terceiro numero: ";
    cin >> numero3;

    array <int, 3> lista = {numero1, numero2, numero3};  

    calcularMedia(lista);
}
