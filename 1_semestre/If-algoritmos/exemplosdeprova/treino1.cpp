//Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura
#include <iostream>
#include <ctype.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n, total;
    cout << "Informe a quantidade de números que deseja digitar: ";
    cin >> n;
    float vetor[n];
    total = n;

    for(n = 0; n < total; n++){
        cout << "\nInforme o " << n + 1 << "º número: ";
        cin >> vetor[n];
    }
    cout << "\nOs números digitados foram: ";
    for(n = total-1; n >= 0; n--){
        cout << endl << vetor[n];
    }
}
