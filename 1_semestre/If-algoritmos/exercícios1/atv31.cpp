#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float minimo, salario, recebe;

    cout << "digite o valor do salario minimo: \n";
    cin >> minimo;

    cout << "digite o valor do seu salario: \n";
    cin >> salario;

    recebe = salario / minimo;

    cout << "voce recebe " << recebe << " salario(s) mínimo(s).\n";
}
