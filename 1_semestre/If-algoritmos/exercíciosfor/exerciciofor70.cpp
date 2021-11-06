#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    float n, soma = 0.0;
    for (int i = 1; i <= 10; i++){
        cout << "\nDigite o " << i << "º número:";
        cin >> n;
        soma = soma + n;
    }
    system("cls");
    cout << "\nA soma dos números digitados é: " << soma;
    cout << "\n\nA média dos números digitados é: " << soma / 10 << endl;
}
