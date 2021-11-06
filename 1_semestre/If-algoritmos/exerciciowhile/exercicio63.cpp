//Faça um algoritmo onde usuário terá 6 chances para acertar um número gerado
//pelo computador (0..100)
//O Computador irá auxiliando o usuário informando se o valor digitado é maior ou
//menor que o valor gerado pelo computador
//Caso o usuário não acertar nas 6 tentativas deverá ser informado uma mensagem que
//as chances acabaram e mostrar o número gerado.
//Caso o usuário acerte antes de acabar as chances deverá ser informado uma
//mensagem de parabéns

#include <iostream>
#include <cstdlib>// para gerar numero aleatorio.
#include <ctime>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int chance=0, n, tent;

    srand(time(NULL));
    n = rand() % 100;
    cout << "Nós sorteamos um número entre 0 e 100!\n";
    cout << "tente adivinha-lo!: ";
    cin >> tent;

    while(chance < 5 && tent != n){
        chance ++;
        if(tent < n){
            cout << "O número é mais alto! tente novamente: ";
            cin >> tent;
        }
        else if(tent > n){
            cout << "O número é mais baixo! tente novamente: ";
            cin >> tent;
        }
    }
    if(tent == n){
        cout << "parabéns, você acertou!\n";
    }
    else{
        cout << "Lamento, você esgotou as suas chances.\n";
        cout << "O número correto era " << n;
    }
}
