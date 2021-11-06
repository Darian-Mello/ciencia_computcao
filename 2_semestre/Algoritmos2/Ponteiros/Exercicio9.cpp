#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int leitura(float *melhor, int tentativas);

main(){
    setlocale(LC_ALL, "Portuguese");
    int voltas, tentativas=0;
    float tempo, melhortempo;

    do{
        cout << "Olá, informe o número de voltas que a corrida terá! ";
        cin >> voltas;
        if(voltas <= 0)
            cout << "\n\nEsse número de voltas não é permitido.\n\n";
    }while(voltas <= 0);

    do{
        system("cls");
        tempo = leitura(&melhortempo, tentativas);
        tentativas++;

    }while(tempo != 0);

    tentativas--;

    system ("cls");
    cout << "Com um total de " << voltas << " volta(s);";
    cout << "\nO melhor tempo ocorreu na " << tentativas << "ª tentativa";
    cout << "\nMelhor tempo: " << melhortempo;
    cout << endl;
}

int leitura(float *melhor, int tentativas){
    float tempo;
    int termina;

    do{
        cout << "Para encerrar a leitura, e mostrar o melhor tempo entre as tentativas que já foram informadas digite 0: ";
        cout << "\n\nInforme o tempo na sua " << tentativas + 1 << "ª tentativa: ";
        cin >> tempo;

        if(tempo < 0)
            MessageBox(NULL, "não é permitido um tempo negativo. ", "Erro", MB_OK | MB_ICONEXCLAMATION);
    }while(tempo < 0);

    if(tentativas == 0)
        *melhor = tempo;

    if(tempo < *melhor && tempo != 0)
        *melhor = tempo;

    return tempo;
}



