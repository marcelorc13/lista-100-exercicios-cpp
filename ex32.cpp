#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;

char caractere;

vector<char> vogais = {'a', 'e', 'i', 'o', 'u'};

string identificarCaracter(char str, vector<char> vogais) {
    string res;
    if(isalpha(str)) {
        for(int i = 0; i < vogais.size(); i++) {
            if(tolower(str) == vogais[i]) {
                res = "O caracter e uma Letra e uma Vogal";
                break;
            }
            else {
                res = "O caracter e uma Letra e uma Consoante"; 
            }
        }
    }
    else if(isdigit(str)) {
        res = "O caracter e um numero";
    }
    else if(ispunct(str)) {
        res = "O caracter e um simbolo";
    }
    cout << res;
}

int main() {
    cout << "Insira um caracter seja ele numero, letra ou simbolo: ";
    cin >> caractere;

    identificarCaracter(caractere, vogais);
}
