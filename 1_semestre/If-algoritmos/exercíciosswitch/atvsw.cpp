#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int mes;

    cout << "Informe o m�s\n";
    cin >> mes;

    switch(mes){
    case 1:
        cout << "janeeiro\n";
        break;
    case 2:
        cout << "Fevereiro\n";
        break;
    case 3:
        cout << "Mar�o\n";
        break;
    case 4:
        cout << "Abil\n";
        break;
    case 5:
        cout << "Maio\n";
        break;
    case 6:
        cout << "Junho\n";
        break;
    case 7:
        cout << "Julho\n";
        break;
    case 8:
        cout << "Agosto\n";
        break;
    case 9:
        cout << "Setembro\n";
        break;
    case 10:
        cout << "Outubro\n";
        break;
    case 11:
        cout << "Novembro\n";
        break;
    case 12:
        cout << "Dezembro\n";
        break;
    default:
        cout << "m�s desconhecido";
        break;
    }
}
