#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int int1, int2, resto;
    float quociente;

    cout << "Digite um n�mero\n";
    cin  >> int1;

    cout << "digite outro n�mero\n";
    cin >> int2;

    quociente = (float)int1 / int2; // um numero � tranferido para float para poder exibir o resultado correto.
    resto = int1 % int2;            // caso contrario, ingnoraria a virgula.

    cout << "A quociente �: " << quociente << endl;
    cout << "O resto da divis�o �: " << resto << endl;
}
