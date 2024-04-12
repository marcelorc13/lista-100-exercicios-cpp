#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

string letra;
vector<string> vogais = {"a", "e", "i", "o", "u"};

int verificarVogal(vector<string> arr, string l) {
    string res = "";
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == l) {
            res = "Sua letra e vogal ";
            break;
        }
        else {
            res = "Sua letra e consoante";
        }
    }
    cout << res;
}

int main() {
    cout << "Insira uma letra minuscula: ";
    cin >> letra;

    verificarVogal(vogais, letra);
}
