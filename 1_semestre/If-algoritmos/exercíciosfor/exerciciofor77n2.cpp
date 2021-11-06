//Elabore um algoritmo que obtenha o mínimo múltiplo comum (MMC) entre dois números
//fornecidos
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    int mmc = 1;

    cout << "Informe os dois números para saber O Mínimo Múltiplo comum: ";
    cout << "\nInforme o primeiro número: ";
    cin >> n1;
    cout << "\nInforme o segundo número: ";
    cin>> n2;

    while (mmc % n1 != 0 || mmc % n2 != 0){
        mmc++;
    }
    cout << "\nO MMC é: " << mmc;
}
