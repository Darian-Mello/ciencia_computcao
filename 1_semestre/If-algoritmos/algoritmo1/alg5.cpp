#include <iostream> // para funcionar a entrada(o que aparece na tela) e saida(o que o usuario digita)
using namespace std; // Um namespace permite a definição de estruturas. sem isso teria que acrecentar std antes de vada cout e cin.

main(){

    setlocale(LC_ALL, "portuguese"); // serve para funcionar os acentos
    float nota1, nota2, nota3, mediap;

    cout << "Informe a nota do primeiro trimestre:\n";
    cin >> nota1;

    cout << " Informe a nota do segundo trimestre:\n";
    cin >> nota2;

    cout << " Informe a nota do segundo trimestre:\n";
    cin >> nota3;

    mediap = nota1 * 3 + nota2 * 3 + nota3 * 4;
    mediap = mediap / (3 + 3 + 4);

    cout <<  "Sua média ponderada é: " << mediap;
}
