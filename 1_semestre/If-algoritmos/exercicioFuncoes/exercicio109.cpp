#include <iostream>

using namespace std;

int fatorial(int n);
main(){
    setlocale(LC_ALL,"Portuguese");
    int x, y;

    do{
        cout << "Informe um número inteiro menor ou igual a 0 para saber o seu fatorial: ";
        cin >> x;
    }while(x > 0);

    y = fatorial(x);

    cout << "\nO fatorial de " << x << " é " << y << ".\n";
}

int fatorial(int n){
    for(int i = n+1; i<0; i++){
        n = n * i;
    }
    if(n == 0)
        n = 1;
    if(n > 0)
        n = n * -1;
    return n;
}
