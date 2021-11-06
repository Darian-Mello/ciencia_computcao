#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int p;
    string v;

    cout << "Informe o valor do produto:\n";
    cin >> v;
    cout << "Informe o código de origem:\n";
    cin >> p;

    switch(p){
    case 1:
        cout << "Procedência: Sul.\n";
        break;
    case 2:
        cout << "Procedência: Norte.\n";
        break;
    case 3:
        cout << "Procedência: Leste.\n";
        break;
    case 4:
        cout << "Procedência: Oeste.\n";
        break;
    case 5:
    case 6:
        cout << "Procedência: Nordeste.\n";
        break;
    case 7 ... 9:
        cout << "Procedência: Sudeste.\n";
        break;
    case 10 ... 20:
        cout << "Procedência: Centro-oeste.\n";
        break;
    case 21 ... 30:
        cout << "Procedência: Noroeste.\n";
        break;
    default:
        cout << "Código inválido.\n";
        break;
    }
}
