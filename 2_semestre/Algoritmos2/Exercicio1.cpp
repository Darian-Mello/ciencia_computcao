#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int cod=1, quant, ped, i=0;
    float valor, total=0;
    string nome;
    vector <string> pedido;
    vector <float> valorProd;
    vector <int> quantProd;

    cout << "Vamos realizar o pedido! \n";
    do{
        do{
            if((cod != 1 && cod != 2)&&(cod < 10 || cod > 15))
                cout << "Este código não está presente no cardápio!\n";
            cout << "\nInforme o código do " << i+1 << "º item: ";
            cin >> cod;
        }while((cod != 1 && cod != 2)&&(cod < 10 || cod > 15));

        do{
            cout << "Informe a quantidade deste item que deseja: ";
            cin >> quant;
        }while(quant < 0);

        switch(cod){
        case 1:
            valor = 8 * quant;
            nome = "Refrigerante";
            break;
        case 2:
            valor = 10.5 * quant;
            nome = "Suco Natural";
            break;
        case 10:
            valor = 12 * quant;
            nome = "Cachorro Quente";
            break;
        case 11:
            valor = 16.5 * quant;
            nome = "Bauru Simples";
            break;
        case 12:
            valor = 18 * quant;
            nome = "Bauru com ovo";
            break;
        case 13:
            valor = 22 * quant;
            nome = "Hambúrguer";
            break;
        case 14:
            valor = 20 * quant;
            nome = "Cheeseburger";
            break;
        case 15:
            valor = 10 * quant;
            nome = "Torrada";
        }
        pedido.push_back(nome);
        valorProd.push_back(valor);
        quantProd.push_back(quant);
        total += valor;
        i++;

        cout << "\n1 – Incluir mais um item \n2 – Encerrar o pedido\n";
        cin >> ped;
        system("cls");
    }while(ped == 1);

    cout << fixed;
    cout.precision(2);
    cout.width(20);
    cout << left << "Descrição";
    cout.width(15);
    cout << left << "QTD";
    cout << "Valor do Item" << endl;

    for(i=0; i<pedido.size(); i++){
        cout.width(21);
        cout << left << pedido[i];
        cout.width(22);
        cout << quantProd[i];
        cout << valorProd[i] << endl;
    }
    cout << "\nTotal do Pedido: " << total << endl;
}
