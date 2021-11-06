#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int int1, int2, resto;
    float quociente;

    cout << "Digite um número\n";
    cin  >> int1;

    cout << "digite outro número\n";
    cin >> int2;

    quociente = (float)int1 / int2; // um numero é tranferido para float para poder exibir o resultado correto.
    resto = int1 % int2;            // caso contrario, ingnoraria a virgula.

    cout << "A quociente é: " << quociente << endl;
    cout << "O resto da divisão é: " << resto << endl;
}
