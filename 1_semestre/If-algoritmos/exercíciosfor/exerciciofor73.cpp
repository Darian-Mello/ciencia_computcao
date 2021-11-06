//Construa um algoritmo que para uma turma de 10 alunos determine :
//a) A Média geral da Turma
//b) A quantidade de alunos Aprovados com Media > 7
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int aprovados = 0, alunos = 0;
    float media, soma = 0.0, nota;

    for (int i=1;i<=10;i++){
        cout << "\nDigite a nota do " << i << "º aluno:";
        cin >> nota;
        soma+= nota;
        if (nota >= 7){
            aprovados++;
        }
        alunos++;
    }
    media = soma / alunos;
    cout << "\nO total de alunos aprovados é: " << aprovados;
    cout << "\nA média das notas dos alunos é: " << media << endl;
}
