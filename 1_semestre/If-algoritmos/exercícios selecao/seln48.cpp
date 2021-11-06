/*Faça um algoritmo que leia um número que represente um mês do ano. Após a leitura
escreva por extenso qual o mês lido. Caso o número digitado não esteja na faixa de
1..12 escreva uma mensagem informando o usuário do erro da digitação.*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int mes;

    cout << "digite o mes\n";
    cin >> mes;

    if (mes ==1){
        cout << "\nJaneiro";
    }
    else if (mes ==2){
        cout << "\nfevereiro";
    }
    else if (mes ==3){
        cout << "\nmarço";
    }
    else if (mes ==4){
        cout << "\nabril";
    }
    else if (mes ==5){
        cout << "\nmaio";
    }
    else if (mes ==6){
        cout << "\nJunho";
    }
    else if (mes ==7){
        cout << "\nJulho";
    }
    else if (mes ==8){
        cout << "\nagosto";
    }
    else if (mes ==9){
        cout << "\nsetembro";
    }
    else if (mes ==10){
        cout << "\noutubro";
    }
    else if (mes ==11){
        cout << "\nnovembro";
    }
    else if (mes ==12){
        cout << "\ndezembro";
    }
    else
        cout << "Esse mes não existe.";
}

