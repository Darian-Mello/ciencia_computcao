#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int ddd;

    cout << "infotrme o DDD:\n";
    cin >> ddd;

    switch(ddd){
    case 61:
        cout << "Bras�lia\n";
        break;
    case 71:
        cout << "Salvador\n";
        break;
    case 11:
        cout << "S�o Paulo\n";
        break;
    case 21:
        cout << "Rio de janeiro\n";
        break;
    case 32:
        cout << "juiz de Fora\n";
        break;
    case 19:
        cout << "Campinas\n";
        break;
    case 27:
        cout << "Vit�ria\n";
        break;
    case 31:
        cout << "Belo Horizonte\n";
        break;
    default:
        cout << "DDD n�o cadastrado.\n";
        break;
       }


}
