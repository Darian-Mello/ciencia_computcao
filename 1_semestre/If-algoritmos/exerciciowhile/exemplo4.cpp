#include <iostream>
#include <cstdlib> // biblioteca para poder incluir o limpador de tela.
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n;

    do{
        system("CLS"); // Limpa a tela.
        cout << "Informe uma opção: \n";
        cout << "1 - opção\n";
        cout << "2 - opção\n";
        cout << "0 - sair\n";
        cin >> n;

        if(n==1){
            cout << "selecionou a opção 1\n";
        }
        else if(n==2){
            cout << "selecionou a opção 2\n";
        }
        else if (n!=0){
            cout << "informe uma opção válida\n";
        }
    }while(n!=0);
}
