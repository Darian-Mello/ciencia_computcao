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
            cout << "Informe o n�mero de gols do Inter na partida: ";
            cin >> gi;
            if(gi < 0)
                cout << "\nN�mero inv�lido! Tente novamente: \n";
        }while(gi < 0);
        do{
            cout << "\nInforme o n�mero de gols do Gr�mio na partida: ";
            cin >> gg;
            if(gg < 0)
                cout << "\nN�mero inv�lido! Tente novamente: \n";
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

    cout << "N�mero de grenais contados: " << cont;
    cout << "\nN�mero de vit�rias do Inter: " << vi;
    cout << "\nN�mero de vit�rias do Gr�mio: " << vg;
    cout << "\nN�mero de empates: " << empate << endl;
}

