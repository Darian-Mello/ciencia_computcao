#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    float n, maior, menor;
    for (int i = 1; i <= 10; i++){
        cout << "\nDigite o " << i << "� n�mero:";
        cin >> n;
        if(i==1){
            maior = n;
            menor = n;
        }
        if(n > maior)
            maior = n;
        if(n < menor)
            menor = n;
    }
    system("cls");
    cout << "\nO maior n�mero digitado foi: " << maior;
    cout << "\n\nO menor n�mero digitado foi: " << menor<< endl;
}
