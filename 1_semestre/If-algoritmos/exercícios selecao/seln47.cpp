/* O sistema de avalia��o de determinada disciplina, � composto por tr�s provas. Fa�a
um algoritmo para calcular a m�dia final de um aluno desta disciplina. Conforme
tabela abaixo classifique o aluno quanto ao seu conceito:
0 - 59 => I 60 - 69 => S 70 - 89 => B 90 - 100 => O*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, n3, f;
    cout << "informe a nota da prova 1:\n";
    cin >> n1;
    cout << "informe a nota da prova 2:\n";
    cin >> n2;
    cout << "informe a nota da prova 3:\n";
    cin >> n3;

    f = (n1 + n2 + n3) / 3;
    if (f >= 0 && f <= 59.99){
        cout << "seu conceito �:" << "I";
    }
    else if (f >= 60 && f <= 69.99){
        cout << "seu conceito �:" << "S";
    }
    else if (f >= 70 && f <= 89.99){
        cout << "seu conceito �:" << "B";
    }
    else if (f >= 90 && f <= 100){
        cout << "seu conceito �:" << "O";
    }
    else
        cout << "voce digitou um valor errado.";

}
