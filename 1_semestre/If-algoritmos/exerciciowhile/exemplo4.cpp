#include <iostream>
#include <cstdlib> // biblioteca para poder incluir o limpador de tela.
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n;

    do{
        system("CLS"); // Limpa a tela.
        cout << "Informe uma op��o: \n";
        cout << "1 - op��o\n";
        cout << "2 - op��o\n";
        cout << "0 - sair\n";
        cin >> n;

        if(n==1){
            cout << "selecionou a op��o 1\n";
        }
        else if(n==2){
            cout << "selecionou a op��o 2\n";
        }
        else if (n!=0){
            cout << "informe uma op��o v�lida\n";
        }
    }while(n!=0);
}
