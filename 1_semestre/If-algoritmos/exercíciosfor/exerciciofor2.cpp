//Entrar com um n�mero e imprimir os seus divisores, informando se este n�mero � primo ou
//n�o � primo.
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    int cont ,div, primo;

    cout << "Informe um n�mero para saber seus divisores e se ele � um n�mero primo: ";
    cin >> n;
    if(n == 3 || n == 2 || n == 5 || n == 7){
        cout << endl <<  n << " � um n�mero primo";
    }
    else if(n % 2 != 0){
        if(n % 3 == 0 || n % 5 == 0 || n % 7 == 0){
            cout << endl <<  n << " n�o � um n�mero primo";
        }
        else{
            cout << endl <<  n << " � um n�mero primo";
        }
    }
    else{
        cout << endl <<  n << " n�o � um n�mero primo";
    }
    for (cont = 2; cont<= n; cont++){
        if(n % cont == 0){
            div = cont;
            cout << endl << n << " � divis�vel por " << cont ;
        }
    }
}
