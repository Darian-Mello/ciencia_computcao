#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n, cont = 0, totalPri=0;

    for(int j=0; j<10; j++){
        cout << "informe o " << j+1 << "º número inteiro positivo maior que 1: ";
        cin >> n;

        for(int i=1; i<=n; i++){
            if((n%i) == 0){
                cont++;
            }
        }
        if (cont == 2){
            totalPri++;
        }
        cont = 0;
    }
    cout << "\n Foram digitados " << totalPri << " números primos.";
}

