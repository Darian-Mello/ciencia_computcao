//Criar um algoritmo que faça a leitura de 5 números pelo processo de sorteio
//automático. Os números devem estar entre 0 e 100. Verifique:
//62.1) Qual foi o maior numero Sorteado;
//62.2) Qual foi o menor numero Sorteado;
//62.3) A soma e média dos números Sorteados;

#include <iostream>
#include <cstdlib>// para gerar numero aleatorio.
#include <ctime>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int soma = 0, media = 0, x = 0, n = 0;
    int maior = 0, menor = 0, aux = 0;
    srand(time(NULL));
    while(x < 5){
        n = rand() % 100;

        aux = n;
        soma = soma + aux;

        x++;

        if(x == 1){
            maior = aux;
            menor = aux;
        }

        else if(aux > maior){
            maior = aux;
        }
        else if(aux < menor){
            menor = aux;
        }

        cout << "O " << x << "º número sortiado foi: " << n << endl;
    }
    media = soma / 5;
    cout << endl << maior << " É o maior número.\n";
    cout << menor << " É o menor número.\n";
    cout << "A soma dos números é: "<< soma<< endl;
    cout << "A média dos números é: " << media<<endl;
}
