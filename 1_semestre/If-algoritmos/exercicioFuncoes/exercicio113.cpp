#include <iostream>

using namespace std;

bool perfeito(int n);
main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    bool verifica;

    cout << "informe um número inteiro para saber se ele é perfeito: ";
    cin >> n;

    verifica = perfeito(n);

    cout << endl << verifica << endl;
}

bool perfeito(int n){
    bool verifica = false;
    int soma=0;

    for(int i=n-1; i>0; i--){
        if(n % i == 0)
            soma += i;
    }
    if(soma == n)
        verifica = true;

    return verifica;
}



