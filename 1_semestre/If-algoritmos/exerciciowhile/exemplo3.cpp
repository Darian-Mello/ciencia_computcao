#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float n, soma, quantidade;

    soma = 0;
    quantidade = 0;

    do {
        cout << "Informe um número maior que zero\n";
        cin >> n;
        if(n>0){
            soma = soma + n; // Tambem poderia escrever: soma += n;
            quantidade = quantidade + 1; // tambem poderia ser escrito: quantidade++;
        }
    }while(n>0);
    cout << "A soma dos números lidos é: " << soma << endl;
    cout << "A quantidade de números lidos é " << quantidade << endl;
}
