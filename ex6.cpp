#include <iostream>
using namespace std;

int numero1, numero2;

int calcularQuociente(int n1, int n2) {
    return n1 / n2;
}

int calcularResto(int n1, int n2) {
    return n1 % n2;
}

int main() {
    cout << "Insira o primeiro numero: ";
    cin >> numero1;

    cout << "Insira o segundo numero: ";
    cin >> numero2;

    cout << "O Quociente entre o numero " << numero1 << " e o " << numero2 << " e igual a " << calcularQuociente(numero1, numero2) << " e o resto e igual a " << calcularResto(numero1, numero2);
}
