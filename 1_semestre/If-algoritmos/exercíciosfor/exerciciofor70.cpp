#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    float n, soma = 0.0;
    for (int i = 1; i <= 10; i++){
        cout << "\nDigite o " << i << "� n�mero:";
        cin >> n;
        soma = soma + n;
    }
    system("cls");
    cout << "\nA soma dos n�meros digitados �: " << soma;
    cout << "\n\nA m�dia dos n�meros digitados �: " << soma / 10 << endl;
}
