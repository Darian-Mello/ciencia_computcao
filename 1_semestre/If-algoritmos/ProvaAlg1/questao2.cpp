#include <iostream>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int gi, gg, empate=0, cont=0, vi=0, vg=0;
    char novog;

    do{
        do{
            cout << "Informe o número de gols do Inter na partida: ";
            cin >> gi;
            if(gi < 0)
                cout << "\nNúmero inválido! Tente novamente: \n";
        }while(gi < 0);
        do{
            cout << "\nInforme o número de gols do Grêmio na partida: ";
            cin >> gg;
            if(gg < 0)
                cout << "\nNúmero inválido! Tente novamente: \n";
        }while(gg < 0);
        cont++;
        if(gi > gg)
            vi++;
        else if(gg > gi)
            vg++;
        else
            empate++;

        cout << "\nNovo grenal(S-sim N-nao)? ";
        cin >>novog;
        novog = toupper(novog);

        system("cls");
    }while(novog == 'S');

    cout << "Número de grenais contados: " << cont;
    cout << "\nNúmero de vitórias do Inter: " << vi;
    cout << "\nNúmero de vitórias do Grêmio: " << vg;
    cout << "\nNúmero de empates: " << empate << endl;
}

