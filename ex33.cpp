#include <iostream>
using namespace std;

int x, y;

int identificarPlano(int x, int y) {
        if(x > 0 && y > 0) {
            cout << "O ponto pertence ao Primeiro Quadrante";
        }
        else if(x < 0 && y > 0) {
            cout << "O ponto pertence ao Segundo Quadrante";
        }
        else if(x < 0 && y < 0) {
            cout << "O ponto pertence ao Terceiro Quadrante";
        }
        else if(x > 0 && y < 0) {
            cout << "O ponto pertence ao Quarto Quadrante";
        }
        else if(x > 0 && y == 0) {
            cout << "O ponto pertence ao Primeiro e ao Quarto Quadrante";
        }
        else if(x < 0 && y == 0) {
            cout << "O ponto pertence ao Segundo e Terceiro Quadrante";
        }
        else if(x == 0 && y > 0) {
            cout << "O ponto pertence ao Primeiro e Segundo Quadrante";
        }
        else if(x == 0 && y < 0) {
            cout << "O ponto pertence ao Terceiro e Quarto Quadrante";
        }
        else {
            cout << "O ponto não pertence a nenhum quadrante";
        }
        
}

int main() {
    cout << "Digite o numero que representa X: ";
    cin >> x;
    cout << "Digite o numero que representa Y: ";
    cin >> y;

    identificarPlano(x, y);
}
