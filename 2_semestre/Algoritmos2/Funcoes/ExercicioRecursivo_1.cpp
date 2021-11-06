#include <iostream>
using namespace std;

int calcula(int n1, int n2, int mdc);

main(){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2, menor;

    cout << "Vamos calcular o MDC de dois números!\n";
    do{
        cout << "\nInforme o primeiro número inteiro positivo: ";
        cin >> n1;
        cout << "\nInforme o segundo número inteiro positivo: ";
        cin >> n2;
    }while(n1 <= 0 || n2 <= 0);

    if(n1 <= n2)
        menor = n1;
    else
        menor = n2;

    cout << "\nO MDC entre " << n1 << " e " << n2 << " é: " << calcula(n1, n2, menor) << endl;
}

int calcula(int n1, int n2, int mdc){
    if(n1 % mdc == 0 && n2 % mdc == 0)
        return mdc;
    else
        calcula(n1, n2, mdc-1);
}

