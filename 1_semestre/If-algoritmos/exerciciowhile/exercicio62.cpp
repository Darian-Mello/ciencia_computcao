//Criar um algoritmo que fa�a a leitura de 5 n�meros pelo processo de sorteio
//autom�tico. Os n�meros devem estar entre 0 e 100. Verifique:
//62.1) Qual foi o maior numero Sorteado;
//62.2) Qual foi o menor numero Sorteado;
//62.3) A soma e m�dia dos n�meros Sorteados;

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

        cout << "O " << x << "� n�mero sortiado foi: " << n << endl;
    }
    media = soma / 5;
    cout << endl << maior << " � o maior n�mero.\n";
    cout << menor << " � o menor n�mero.\n";
    cout << "A soma dos n�meros �: "<< soma<< endl;
    cout << "A m�dia dos n�meros �: " << media<<endl;
}
