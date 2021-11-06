/*Criar um algoritmo que leia uma data( dia, mês e ano separados) imprima se a data é
válida ou não (Ano bissexto (Ano % 4 = = 0)*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int ano, dia, mes, b;
    cout << "informe o mes\n" ;
    cin >> mes;
    cout << "informe o ano\n" ;
    cin >> ano;
    cout << "informe o dia\n" ;
    cin >> dia;

    if (mes == 1 || mes == 3 || mes == 5 ||mes== 7 || mes== 8 || mes== 10|| mes == 12){
        if (dia >= 1 && dia <=31){
            if (ano < 10000){
                cout << "data existente.\n";
            }
            else
                cout << "data invalida";
        }
        else
            cout << "data invalida";
    }

    else if (mes == 4 || mes == 6 ||mes== 7 || mes== 11){
        if (dia >= 1 && dia <=30){
            if (ano < 10000){
                cout << "data existente.\n";
            }
            else
                cout << "data invalida";
        }
        else
            cout << "data invalida";
    }
    else if (mes == 2){
        if (mes > 0 && mes <=28){
            if (ano < 10000){
                cout << "data valida\n";
            }
            else
                cout << "data invalida";
        }
        else
            cout << "data invalida";
    }
    else if(mes==2){
        if (dia == 29){
            b = (ano % 4) == 0;
            cout << "data valida\n";
        }
        else
            cout << "data valida\n";
    }
    else
        cout << "voce digitou um valor errado.\n";
}







