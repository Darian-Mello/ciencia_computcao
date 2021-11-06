#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int i=1, quant, cod;
    bool existe;
    string itens[8] = {"Refrigerante", "Suco Natural", "Cachorro quente", "Bauru simples","Bauru com ovo", "Hambúrger", "Cheeseburguer", "Torrada"};
    int codigos[8] = {1, 2, 10, 11, 12, 13, 14, 15};
    float precos[8] = {8.00, 10.50, 12.00, 16.50, 18.00, 22.00, 20.00, 10.00};
    vector <string> pedido;

    cout << "Vamos realizar o pedido! \n";
    do{
        pedido[i][3];
        existe = false;
        cout << "Informe o código do " << i << " item: ";
        cin >> cod;
        for(i; i<8; i++){
            if(codigos[i]== cod){
                existe = true;
                break;
            }
        }
        if(existe == false)
            cout << "\nEste produto item não está presente no cardápio!\n\n";
    }while(existe != true);

    do{
        cout << "\nInforme a quantidade desse item que desejas: ";
        cin >> quant;
    }while(quant<0);
}

