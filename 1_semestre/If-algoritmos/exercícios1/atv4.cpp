#include <cmath> //isso inclui a bibliioteca que faz a exponencia��o
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int numero, quadrado, cubo, cubo2;

    cout << "digite um n�mero inteiro: \n";
    cin >> numero;

    quadrado = numero * numero;
    cubo = numero * numero * numero;

    cubo2 = pow(numero, 3); // pow � a biblioteca onde esta.

    cout << "O quadrado do n�mero escolhido �: " << quadrado << endl;
    cout << "O cubo do n�mero escolhido �: " << cubo << endl;
}
