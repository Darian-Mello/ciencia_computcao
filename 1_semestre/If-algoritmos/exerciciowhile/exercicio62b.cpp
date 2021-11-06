//nesta variaçao, o usuario digita os numers.
#include <iostream>
#include <cstdlib>// para gerar numero aleatorio.
#include <ctime>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int soma = 0, media = 0, x = 0, n = 0;
    int maior = 0, menor = 0, aux = 0, aux2 = 0;

    while(x < 5){
        cout << "digite um número:\n";
        cin >> n;

        aux = n;
        aux2 = n;
        soma = soma + aux;
        media = soma / 5;

        x++;

        if(x == 1){
            maior = aux2;
            menor = aux2;
        }

        if(aux2 > maior){
            maior = aux2;
        }
        else if(aux2 < menor){
            menor = aux2;
        }

        cout << "O " << x << "º número foi: " << n << endl;
    }

    cout << maior << " É o maior número.\n";
    cout << menor << " É o menor número.\n";
    cout << "A soma dos números é: "<< soma<< endl;
    cout << "A média dos números é: " << media<<endl;

}
