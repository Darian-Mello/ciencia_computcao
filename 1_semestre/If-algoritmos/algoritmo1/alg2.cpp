#include <iostream> // para funcionar a entrada e saida
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese"); // serve para funcionar os acentos
    float n1, n2, n3, media;
    cout << "informe a nota da prova 1\n";
    cin >> n1;

    cout << "informe a nota da prova 2\n";
    cin >> n2;

    cout << "informe a nota da prova 3\n";
    cin >> n3;

    media = (n1+n2+n3) / 3;

    cout << " A média do aluno é: " << media << endl;
}
