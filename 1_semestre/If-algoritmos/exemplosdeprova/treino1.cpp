//Dada uma seq��ncia de n n�meros, imprimi-la na ordem inversa � da leitura
#include <iostream>
#include <ctype.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n, total;
    cout << "Informe a quantidade de n�meros que deseja digitar: ";
    cin >> n;
    float vetor[n];
    total = n;

    for(n = 0; n < total; n++){
        cout << "\nInforme o " << n + 1 << "� n�mero: ";
        cin >> vetor[n];
    }
    cout << "\nOs n�meros digitados foram: ";
    for(n = total-1; n >= 0; n--){
        cout << endl << vetor[n];
    }
}
