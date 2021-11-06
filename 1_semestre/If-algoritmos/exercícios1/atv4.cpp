#include <cmath> //isso inclui a bibliioteca que faz a exponenciação
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int numero, quadrado, cubo, cubo2;

    cout << "digite um número inteiro: \n";
    cin >> numero;

    quadrado = numero * numero;
    cubo = numero * numero * numero;

    cubo2 = pow(numero, 3); // pow é a biblioteca onde esta.

    cout << "O quadrado do número escolhido é: " << quadrado << endl;
    cout << "O cubo do número escolhido é: " << cubo << endl;
}
