#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    char clas;
    float preco, venda, porcent;

    do{
        cout << "\nInforme a classifica��o do ve�culo(N, S, U): ";
        cin >> clas;
        clas = toupper(clas);
        if(clas != 'N' && clas != 'S' && clas != 'U')
            cout << "\nClasifica��o inv�lida!";
    }while(clas != 'N' && clas != 'S' && clas != 'U');
    system("cls");

    do{
        cout << "\nInforme o pre�o do ve�culo: ";
        cin >> preco;
        if(preco < 0)
            cout << "\nPre�o inv�lido!";
    }while(preco < 0);

    system("cls");
    if(clas == 'N'){
        porcent = (preco * 8)/100;
    }
    else if(clas == 'S'){
        porcent = (preco * 10)/100;
    }
    else if(clas == 'U'){
        porcent = (preco * 20)/100;
    }

    venda = preco + porcent;
    cout << "O valor da venda � de R$" << venda << endl;
}
