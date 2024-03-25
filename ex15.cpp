#include <iostream>
using namespace std;

double alturaPessoa, sombraPessoa, sombraPredio;

double alturaDoPredio(double h, double s, double S) {
    return h * S / s;
}

int main() {
    cout << "(insira todas as medidas em metro)\n";
    cout << "Insira sua altura: ";
    cin >> alturaPessoa;

    cout << "Insira o tamanho da sua sombra: ";
    cin >> sombraPessoa;

    cout << "Insira o tamanho da sombra do predio: ";
    cin >> sombraPredio;
    
    cout << "A altura do predio e igual a: " << alturaDoPredio(alturaPessoa, sombraPessoa, sombraPredio); 
}
