//Certa vez me deparei com um estranho m�todo de encontrar o quadrado de um n�mero
//positivo. O Algoritmo � o seguinte :
//O quadrado de um n�mero positivo n � igual a soma dos n primeiros n�meros �mpares
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int n, impar, quad, result = 0, cont;

    cout <<"O quadrado de um n�mero positivo n � igual a soma dos n primeiros n�meros �mpares.";
    do{
        cout << "\nDigite um n�mero positivo: ";
        cin >> n;
    }while(n <= 0);

    quad = n*n;
    for(impar=1, cont=1; cont<=n; impar+=2, cont++){
        result = impar + result;
        cout << "o n�mero �mpar �: "<< impar << "\t A soma � "<< result<< endl;
    }
    cout << "\nAcima, percebemos a quantidade n de n�meros positivos �mpares, a esquerda, e ao lado a soma dos mesmos.";
    cout << "\nSabemos que " << n << " elevado ao quadrado � " << quad << " e que a soma dos " << n << " primeiros n�meros �mpares resulta em " << result;
    cout << "\nPortanto, a teoria esta comprovada.\n";
}
