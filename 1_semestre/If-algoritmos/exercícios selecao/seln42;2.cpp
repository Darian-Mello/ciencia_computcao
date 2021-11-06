#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float salario, novo;
    string nome;
    char cat;

    cout << "informe o seu nome\n";
    cin >> nome;

    cout << "informe sua categoria\n";
    cin >> cat;

    cout << "informe o seu salario\n";
    cin >> salario;

    if (cat == 'a' || cat == 'c' || cat == 'f' || cat == 'h'){
        novo = (salario * 10) / 100;
        novo = salario + novo;
        cout << nome << endl << "seu novo salário é: RS" << novo;
    }
    else if (cat == 'b' || cat == 'd' || cat == 'e' || cat == 'i' || cat == 'j' || cat =='t'){
        novo = (salario * 15) / 100;
        novo = salario + novo;
        cout << nome << endl << "seu novo salario: RS" << novo;
    }
    else if (cat == 'k' || cat == 'r'){
        novo = (salario * 25) / 100;
        novo = salario + novo;
        cout << nome << endl << "seu novo salario: RS" << novo;
    }
    else if (cat == 'l' || cat == 'm' || cat == 'n' || cat == 'o' || cat == 'p' || cat =='s'){
        novo = (salario * 35) / 100;
        novo = salario + novo;
        cout << nome << endl << "seu novo salario: RS" << novo;
    }
    else if (cat == 'u' || cat == 'v' || cat == 'x' || cat == 'z' || cat == 'w'){
        novo = (salario * 50) / 100;
        novo = salario + novo;
        cout << nome << endl << "seu novo salario: RS" << novo;
    }
    else
        cout << "Voce digitou um valor invalido\n";
}

