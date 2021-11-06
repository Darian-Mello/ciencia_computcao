#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n, cont = 0;

        cout << "informe um número inteiro positivo maior que 1: ";
        cin >> n;

    for(int i=1; i<=n; i++){
        if((n%i) == 0){
            cont++;
            cout << "\n" << n << " é divisível por " << i;
        }
    }

    if (cont == 2){
        cout << "\n" << n << " é um número primo!";
    }
    else{
        cout << "\n\n" << n << " não é um número primo!";
    }
}
