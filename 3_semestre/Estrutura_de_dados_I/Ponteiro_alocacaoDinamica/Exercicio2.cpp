#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int tam;
    float media=0;

    cout << "Informe a quantidade de alunos na turma: ";
    cin >> tam;
    float *notas = new float[tam];

    for(int i=0; i<tam; i++){
        do{
            system("cls");
            cout << "Informe a nota final do " << i + 1 << "º aluno: ";
            cin >> notas[i];
            if(notas[i] < 0 || notas[i] > 10){
                MessageBox(NULL,"A nota do aluno deve estar entre 0 e 10.", "Erro", MB_OK | MB_ICONEXCLAMATION);;
            }
        }while(notas[i] < 0 || notas[i] > 10);

        media += notas[i];
    }

    system("cls");
    media = media / tam;
    cout << "A média final de toda a turma é igual a: " << media << endl;

    delete[] notas;
}
