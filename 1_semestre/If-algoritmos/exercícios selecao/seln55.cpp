/*Faça um algoritmo que leia mês e Ano da última Recarga de determinado
extintor.*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int mes, mesn, ano;
    string tipo;

    cout << "Informe o valor ultimo ano em que recarregou seu extintor:\n";
    cin >> ano;
    cout << "Informe o ultimo mês em que recarregou seu extintor:\n";
    cin >> mes;
    cout << "Informe o tipo do seu extintor.\n";
    cin >> tipo;

    if (tipo == "MO"|| tipo == "mo"){
        mes = mes + 5;
        if (mes > 12){
            mesn = mes - 12;
            ano = ano + 1;
            cout << "o vencimento é em:" << mesn << "/" << ano << endl;
        }
    }
    else if (tipo == "MT"|| tipo == "mt"){
        mes = mes + 10;
        if (mes > 12){
            mesn = mes - 12;
            ano = ano + 1;
            cout << "o vencimento é em:" << mesn << "/" << ano << endl;
        }
    }
    else if (tipo == "PQ"|| tipo == "pq"){
        mes = mes + 8;
        if (mes > 12){
            mesn = mes - 12;
            ano = ano + 1;
            cout << "o vencimento é em:" << mesn << "/" << ano << endl;
        }
    }
    else if (tipo == "ML"|| tipo == "ml"){
        mes = mes + 12;
        if (mes > 12){
            mesn = mes - 12;
            ano = ano + 1;
            cout << "o vencimento é em:" << mesn << "/" << ano << endl;
        }
    }
    else
        cout << "voce digitou um valor inválido.\n";
}
