#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int valor;

    cout << "informe um número inteiro de 1 a 9 para saber como escrever por extenso: \n";
    cin >> valor;

    if (valor == 1){
        cout << "número UM!\n";
    }
    else if (valor == 2){
        cout << "número DOIS!\n";
    }
    else if (valor == 3){
        cout << "número TRÊS!\n";
    }
    else if (valor == 4){
        cout << "número QUATRO!\n";
    }
    else if (valor == 5){
        cout << "número CINCO!\n";
    }
    else if (valor == 6){
        cout << "número SEIS!\n";
    }
    else if (valor == 7){
        cout << "número SETE!\n";
    }
    else if (valor == 8){
        cout << "número OITO!\n";
    }
    else if (valor == 9){
        cout << "número NOVE!\n";
    }
    else {
        cout << "\n Valor inválido.\n";
    }
}
