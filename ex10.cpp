#include <iostream>
using namespace std;

string converterEmBinario(int n)
{

    string resultado = "";

    while(n > 0) {
        if(n % 2 == 0) {
            resultado = "0" + resultado;
        }
        else {
            resultado = "1" + resultado;
        }
        n /= 2;
    }
    
    return resultado;
}

// usei GPT para ter ideia da formula de converter os binarios

int main()
{

    int numero;

    cout << "Insira um numero inteiro menor que 32: ";
    cin >> numero;

    if (numero < 0 || numero > 32)
    {
        cout << "Erro: Digite um numero menor de 32 e maior que 0";
    }
    else
    {
        cout << "O numero " << numero << " em binario e igual a: " << converterEmBinario(numero);
    }
}
