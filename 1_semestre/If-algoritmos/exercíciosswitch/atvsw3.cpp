#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int p;
    string v;

    cout << "Informe o valor do produto:\n";
    cin >> v;
    cout << "Informe o c�digo de origem:\n";
    cin >> p;

    switch(p){
    case 1:
        cout << "Proced�ncia: Sul.\n";
        break;
    case 2:
        cout << "Proced�ncia: Norte.\n";
        break;
    case 3:
        cout << "Proced�ncia: Leste.\n";
        break;
    case 4:
        cout << "Proced�ncia: Oeste.\n";
        break;
    case 5:
    case 6:
        cout << "Proced�ncia: Nordeste.\n";
        break;
    case 7 ... 9:
        cout << "Proced�ncia: Sudeste.\n";
        break;
    case 10 ... 20:
        cout << "Proced�ncia: Centro-oeste.\n";
        break;
    case 21 ... 30:
        cout << "Proced�ncia: Noroeste.\n";
        break;
    default:
        cout << "C�digo inv�lido.\n";
        break;
    }
}
