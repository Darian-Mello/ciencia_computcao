//Montar um algoritmo e um programa que leia um número inteiro, positivo menor ou igual a
//10. Montar e mostrar a tabuada deste número, como o exemplo abaixo.
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n, vezes, result;
    do{
        cout << "Informe um um número inteiro, positivo menor ou igual a 10 para saber sua tabuada: ";
        cin >> n;
    }while (n < 1 || n > 10);

    for (vezes = 1; vezes <= 10; vezes += 1){
        result = n * vezes;
        cout << "\n" << vezes << " x " << n << " = " << result;
    }
}
