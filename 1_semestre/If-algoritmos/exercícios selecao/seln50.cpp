
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int salario, novo, cargo;

    cout << "informe o seu salario:\n";
    cin >> salario;

    cout << "informe o código do seu cargo:\n";
    cin >>  cargo;

    if (cargo == 101){
        novo = (salario * 10) / 100;
        novo = salario + novo;
        cout << "seu novo salário é:\n" << novo;
    }
    else if (cargo == 102){
        novo = (salario * 20) / 100;
        novo = salario + novo;
        cout << "seu novo salário é:\n" << novo;
    }
    else if (cargo == 103){
        novo = (salario * 30) / 100;
        novo = salario + novo;
        cout << "seu novo salário é:\n" << novo;
    }

    else{
        novo = (salario * 40) / 100;
        novo = salario + novo;
        cout << "seu novo salário é:\n" << novo;
    }
}
