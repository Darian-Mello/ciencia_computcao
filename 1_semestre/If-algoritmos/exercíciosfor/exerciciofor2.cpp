//Entrar com um número e imprimir os seus divisores, informando se este número é primo ou
//não é primo.
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    int cont ,div, primo;

    cout << "Informe um número para saber seus divisores e se ele é um número primo: ";
    cin >> n;
    if(n == 3 || n == 2 || n == 5 || n == 7){
        cout << endl <<  n << " é um número primo";
    }
    else if(n % 2 != 0){
        if(n % 3 == 0 || n % 5 == 0 || n % 7 == 0){
            cout << endl <<  n << " não é um número primo";
        }
        else{
            cout << endl <<  n << " é um número primo";
        }
    }
    else{
        cout << endl <<  n << " não é um número primo";
    }
    for (cont = 2; cont<= n; cont++){
        if(n % cont == 0){
            div = cont;
            cout << endl << n << " é divisível por " << cont ;
        }
    }
}
