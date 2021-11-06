//Fa�a um algoritmo onde usu�rio ter� 6 chances para acertar um n�mero gerado
//pelo computador (0..100)
//O Computador ir� auxiliando o usu�rio informando se o valor digitado � maior ou
//menor que o valor gerado pelo computador
//Caso o usu�rio n�o acertar nas 6 tentativas dever� ser informado uma mensagem que
//as chances acabaram e mostrar o n�mero gerado.
//Caso o usu�rio acerte antes de acabar as chances dever� ser informado uma
//mensagem de parab�ns

#include <iostream>
#include <cstdlib>// para gerar numero aleatorio.
#include <ctime>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int chance=0, n, tent;

    srand(time(NULL));
    n = rand() % 100;
    cout << "N�s sorteamos um n�mero entre 0 e 100!\n";
    cout << "tente adivinha-lo!: ";
    cin >> tent;

    while(chance < 5 && tent != n){
        chance ++;
        if(tent < n){
            cout << "O n�mero � mais alto! tente novamente: ";
            cin >> tent;
        }
        else if(tent > n){
            cout << "O n�mero � mais baixo! tente novamente: ";
            cin >> tent;
        }
    }
    if(tent == n){
        cout << "parab�ns, voc� acertou!\n";
    }
    else{
        cout << "Lamento, voc� esgotou as suas chances.\n";
        cout << "O n�mero correto era " << n;
    }
}
