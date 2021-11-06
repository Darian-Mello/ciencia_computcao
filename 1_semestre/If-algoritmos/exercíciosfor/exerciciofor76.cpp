//Certa vez me deparei com um estranho método de encontrar o quadrado de um número
//positivo. O Algoritmo é o seguinte :
//O quadrado de um número positivo n é igual a soma dos n primeiros números ímpares
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int n, impar, quad, result = 0, cont;

    cout <<"O quadrado de um número positivo n é igual a soma dos n primeiros números ímpares.";
    do{
        cout << "\nDigite um número positivo: ";
        cin >> n;
    }while(n <= 0);

    quad = n*n;
    for(impar=1, cont=1; cont<=n; impar+=2, cont++){
        result = impar + result;
        cout << "o número ímpar é: "<< impar << "\t A soma é "<< result<< endl;
    }
    cout << "\nAcima, percebemos a quantidade n de números positivos ímpares, a esquerda, e ao lado a soma dos mesmos.";
    cout << "\nSabemos que " << n << " elevado ao quadrado é " << quad << " e que a soma dos " << n << " primeiros números ímpares resulta em " << result;
    cout << "\nPortanto, a teoria esta comprovada.\n";
}
