#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int valor;

    cout << "informe um n�mero inteiro de 1 a 9 para saber como escrever por extenso: \n";
    cin >> valor;

    if (valor == 1){
        cout << "n�mero UM!\n";
    }
    else if (valor == 2){
        cout << "n�mero DOIS!\n";
    }
    else if (valor == 3){
        cout << "n�mero TR�S!\n";
    }
    else if (valor == 4){
        cout << "n�mero QUATRO!\n";
    }
    else if (valor == 5){
        cout << "n�mero CINCO!\n";
    }
    else if (valor == 6){
        cout << "n�mero SEIS!\n";
    }
    else if (valor == 7){
        cout << "n�mero SETE!\n";
    }
    else if (valor == 8){
        cout << "n�mero OITO!\n";
    }
    else if (valor == 9){
        cout << "n�mero NOVE!\n";
    }
    else {
        cout << "\n Valor inv�lido.\n";
    }
}
