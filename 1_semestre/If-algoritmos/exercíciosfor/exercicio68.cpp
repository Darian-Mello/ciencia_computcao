#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n, cont = 0;

        cout << "informe um n�mero inteiro positivo maior que 1: ";
        cin >> n;

    for(int i=1; i<=n; i++){
        if((n%i) == 0){
            cont++;
            cout << "\n" << n << " � divis�vel por " << i;
        }
    }

    if (cont == 2){
        cout << "\n" << n << " � um n�mero primo!";
    }
    else{
        cout << "\n\n" << n << " n�o � um n�mero primo!";
    }
}
