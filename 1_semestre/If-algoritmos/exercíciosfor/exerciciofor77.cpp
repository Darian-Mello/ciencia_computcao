#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    int mmc;

    cout << "Informe dois n�meros para saber O M�nimo M�ltiplo comum: ";
    cout << "\nInforme o primeiro n�mero: ";
    cin >> n1;
    cout << "\nInforme o segundo n�mero: ";
    cin>> n2;

    for(mmc=1;mmc % n1 != 0 || mmc % n2 != 0; mmc++){
    }
    cout << "\nO MMC �: " << mmc;
}
