#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    int mmc;

    cout << "Informe dois números para saber O Mínimo Múltiplo comum: ";
    cout << "\nInforme o primeiro número: ";
    cin >> n1;
    cout << "\nInforme o segundo número: ";
    cin>> n2;

    for(mmc=1;mmc % n1 != 0 || mmc % n2 != 0; mmc++){
    }
    cout << "\nO MMC é: " << mmc;
}
