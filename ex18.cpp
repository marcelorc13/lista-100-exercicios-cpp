#include <iostream>
using namespace std;

int valor1, valor2;

//Usei chatGPT, aprendi sobre o uso do &
int permutarValores(int &v1, int &v2){
    int t = v1;
    v1 = v2;
    v2 = t;
}

int main(){
    cout << "Digite o primeiro valor: ";
    cin >> valor1;

    cout << "Digite o segundo valor: ";
    cin >> valor2;
    
    cout << "Permutando os valores " << valor1 << " e " << valor2 << endl;

    permutarValores(valor1, valor2);

    cout << "O primeiro valor sera: " << valor1  << endl;

    cout << "O segundo valor sera: " << valor2 << endl;
}