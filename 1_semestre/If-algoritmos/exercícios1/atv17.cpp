#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float a, b, c; //c � a variavel auxiliar, sem ela perderiamos um valor.
    cout << " Digite um n�mero qualquer:\n";
    cin >> a;

    cout << " Digite outro n�mero";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "aqui estao os valores trocados: \n";
    cout << a << endl << b;

}
