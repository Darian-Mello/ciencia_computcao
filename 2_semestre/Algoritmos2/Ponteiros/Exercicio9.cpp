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
        cout << "Ol�, informe o n�mero de voltas que a corrida ter�! ";
        cin >> voltas;
        if(voltas <= 0)
            cout << "\n\nEsse n�mero de voltas n�o � permitido.\n\n";
    }while(voltas <= 0);

    do{
        system("cls");
        tempo = leitura(&melhortempo, tentativas);
        tentativas++;

    }while(tempo != 0);

    tentativas--;

    system ("cls");
    cout << "Com um total de " << voltas << " volta(s);";
    cout << "\nO melhor tempo ocorreu na " << tentativas << "� tentativa";
    cout << "\nMelhor tempo: " << melhortempo;
    cout << endl;
}

int leitura(float *melhor, int tentativas){
    float tempo;
    int termina;

    do{
        cout << "Para encerrar a leitura, e mostrar o melhor tempo entre as tentativas que j� foram informadas digite 0: ";
        cout << "\n\nInforme o tempo na sua " << tentativas + 1 << "� tentativa: ";
        cin >> tempo;

        if(tempo < 0)
            MessageBox(NULL, "n�o � permitido um tempo negativo. ", "Erro", MB_OK | MB_ICONEXCLAMATION);
    }while(tempo < 0);

    if(tentativas == 0)
        *melhor = tempo;

    if(tempo < *melhor && tempo != 0)
        *melhor = tempo;

    return tempo;
}



