#include <iostream>
using namespace std;

int idade;

int calcularIdadeEmAnos(int i) {
    return i / 365;
}
int calcularIdadeEmMeses(int i) {
    return i / 30;
}

int main() {
    cout << "Digite sua iadade em dias: ";
    cin >> idade;

    cout << "Sua idade em Anos e: " << calcularIdadeEmAnos(idade) << " e em Meses e: " << calcularIdadeEmMeses(idade) << " e em dias: " << idade;
}
