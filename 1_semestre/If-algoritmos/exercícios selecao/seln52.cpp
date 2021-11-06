/*Construa um algoritmo que conforme tabela abaixo, apresente a data de vencimento
do IPVA*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int placa;

    cout << "informe os dois ultimos dígitos da sua placa:\n";
    cin >> placa;

    if (placa == 01 || placa == 11 || placa == 21 || placa == 31 || placa == 41){
        cout << "O vencimento do seu IPVA ocorre em 06/04/2010";
    }
    else if (placa == 51 || placa == 61 || placa == 71 || placa == 81 || placa == 91){
        cout << "O vencimento do seu IPVA ocorre em 09/04/2010";
    }
    else if (placa == 02 || placa == 12 || placa == 22 || placa == 32 || placa == 42){
        cout << "O vencimento do seu IPVA ocorre em 14/04/2010";
    }
    else if (placa == 52 || placa == 62 || placa == 72 || placa == 82 || placa == 92){
        cout << "O vencimento do seu IPVA ocorre em 16/04/2010";
    }
    else if (placa == 03 || placa == 13 || placa == 23 || placa == 33 || placa == 43){
        cout << "O vencimento do seu IPVA ocorre em 20/04/2010";
    }
    else if (placa == 53 || placa == 63 || placa == 73 || placa == 83 || placa == 93){
        cout << "O vencimento do seu IPVA ocorre em 23/04/2010";
    }
    if (placa == 4 || placa == 14 || placa == 24 || placa == 34 || placa == 44){
        cout << "O vencimento do seu IPVA ocorre em 04/05/2010";
    }
    else if (placa == 54 || placa == 64 || placa == 74 || placa == 84 || placa == 94){
        cout << "O vencimento do seu IPVA ocorre em 07/05/2010";
    }
    else if (placa == 05 || placa == 15 || placa == 25 || placa == 35 || placa == 45){
        cout << "O vencimento do seu IPVA ocorre em 10/05/2010";
    }
    else if (placa == 55 || placa == 65 || placa == 75 || placa == 85 || placa == 95){
        cout << "O vencimento do seu IPVA ocorre em 14/05/2010";
    }
    else if (placa == 06 || placa == 16 || placa == 26 || placa == 36 || placa == 46){
        cout << "O vencimento do seu IPVA ocorre em 21/05/2010";
    }
    else if (placa == 56 || placa == 66 || placa == 76 || placa == 86 || placa == 96){
        cout << "O vencimento do seu IPVA ocorre em 24/05/2010";
    }
    else {
        cout << "voce digitou um valor invalido.";
    }
}
