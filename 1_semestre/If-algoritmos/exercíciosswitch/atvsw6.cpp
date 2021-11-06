#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int p;
    cout << "informe o final da placa";
    cin >> p;

    switch(p){
    case 1:
    case 9:
        cout << "O vencimento ocorre em março\n";
        break;
    case 2:
    case 8:
        cout << "O vencimento ocorre em abril\n";
        break;
    case 3:
    case 0:
        cout << "O vencimento ocorre em maio\n";
        break;
    case 4:
        cout << "O vencimento ocorre em junho\n";
        break;
    case 5:
    case 7:
        cout << "O vencimento ocorre em julho\n";
        break;
    case 6:
        cout << "O vencimento ocorre em\n";
        break;
    default:
        cout << "valor invalido\n";
    }
}
