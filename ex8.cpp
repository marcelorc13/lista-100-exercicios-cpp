#include <iostream>
using namespace std;

double temperaturaEmFahrenheit;

double fahrenheitParaCelcius(double f) {
    return (f - 32) / 1.8;
}

int main() {
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> temperaturaEmFahrenheit;

    cout << "A temperatura de " << temperaturaEmFahrenheit << " graus Fahrenheit em graus Celcius e igual a: " << fahrenheitParaCelcius(temperaturaEmFahrenheit);
}
