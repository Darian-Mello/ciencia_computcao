#include<iostream>
using namespace std;

int calcula(int n);

main(){
    setlocale(LC_ALL,"Portuguese");
    int n, soma;

    cout << "Informe o um número inteiro positivo: ";
    cin >> n;

    soma = calcula(n);

    cout << "\n\n Ao somar os algarismos do número " << n << " obtemos a sama = " << soma << "\n";


}

int calcula(int n){
    int soma, resto;

    if(n > 9){
        resto = n % 10;
        n = n / 10;

        soma = resto + calcula(n);
    }

    else
        return n;
}




