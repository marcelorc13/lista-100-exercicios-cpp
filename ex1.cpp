#include <iostream>

double tamanhoBase, tamanhoAltura;

double calcularAreaRetangulo(double tB, double tA) {
    return tB * tA;
}

int main() {
    std::cout << "Insira o Tamanho da Base: ";
    std::cin >> tamanhoBase;

    std::cout << "Insira o Tamanho da Altura: ";
    std::cin >> tamanhoAltura;

    std::cout << "A area desse retangulo e: " << calcularAreaRetangulo(tamanhoBase, tamanhoAltura);
} 