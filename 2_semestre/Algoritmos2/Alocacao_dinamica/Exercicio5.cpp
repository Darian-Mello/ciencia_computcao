#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <math.h>

using namespace std;

void recebe(float (*notas)[3], int tam, float *mediap);
void mostra(float (*notas)[3], int tam);
void Media_ponderada(float *mediap, int tam);

main(){
    setlocale(LC_ALL, "Portuguese");
    int tam;

    cout << "Informe a quantidade de alunos que ter�o as notas cadastradas: ";
    cin >> tam;

    float (*notas)[3] = new float[tam][3];
    float *medias = new float[tam];

    recebe(notas, tam, medias);

    cout << fixed;
    cout.precision(2);

    system("cls");
    mostra(notas, tam);
    Media_ponderada(medias, tam);

    delete []notas;
    delete []medias;
}

void recebe(float (*notas)[3], int tam, float *mediap){
    system("cls");
    int pesos[3];
    int l;

    // Os pesos s�o importantes para a obten��o da m�dia ponderada.
    cout << "Informe os pesos das notas: \n";
    for(int i=0; i<3; i++){
        cout << "\nInforme o peso da " << i+1 << "� nota: ";
        cin >> pesos[i];
        pesos[i] = abs(*pesos);
    }

    //Aqui s�o recebidas as notas de cada aluno. E durande a execu��o,j� � calculada a m�dia ponderada para cada um.
    //O vetor das m�dias � percorrido por aritim�tica de ponteiros.
    for(l=0; l<tam; l++){

        *mediap = 0;

        for(int c=0; c<3; c++){
            do{
                system("cls");
                cout << "Informe a " << c+1 << "� nota do " << l+1 << "� alono(a): ";
                cin >> notas[l][c];

                if(notas[l][c] < 0 || notas[l][c] > 10)
                    MessageBox(NULL, "As notas poss�veis est�o entre 0 e 10!", "Erro", MB_OK | MB_ICONEXCLAMATION);

            }while(notas[l][c] < 0 || notas[l][c] > 10);

            *mediap += (notas[l][c]) * (pesos[c]); //formula da m�dia ponderada
        }
        *mediap = (*mediap) / (pesos[0] + pesos[1] + pesos[2]); //formula da m�dia ponderada
        mediap++;
    }
}

void mostra(float (*notas)[3], int tam){

    cout << "Notas dos alunos:";
    for(int l=0; l<tam; l++){
        cout << "\n\nAluno " << l+1 << ":\n";
        cout << "Nota1 \t Nota2 \t Nota3 \n";
        for(int c=0; c<3; c++){
            cout << notas[l][c] << "\t";
        }
        cout << endl;
    }
}

void Media_ponderada(float *mediap, int tam){
    float maior, menor;
    int alunomaior, alunomenor;
    int tot_aprovados=0, tot_reprovados=0;

    maior = *mediap;
    menor = *mediap;
    alunomaior = 1;
    alunomenor = 1;

    for(int i=0; i<tam; i++){

        //Verifica��o da menore e menor m�dia;
        if((*mediap) > maior){
            maior = *mediap;
            alunomaior = i+1;
        }
        else if((*mediap) < menor){
            menor = *mediap;
            alunomenor = i+1;
        }

        //Verifica��o das m�rias maiores e menores que 6.
        if((*mediap) >= 6){
            tot_aprovados++;
        }
        else
            tot_reprovados++;

        mediap++;
    }

    cout << "\n\nO Aluno " << alunomaior << " possui a maior nota, com a m�dia ponderada igual �: " << maior;
    cout << "\nO Aluno " << alunomenor << " possui a menor nota, com a m�dia ponderada igual �: " << menor;

    cout << "\n\nTotal de alunos com a m�dia superior ou igual � 6: " << tot_aprovados;
    cout << "\nTotal de alunos com a m�dia inferior � 6: " << tot_reprovados << endl;
}





