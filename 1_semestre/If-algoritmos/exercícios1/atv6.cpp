#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float preco, desconto, novop;
    cout << "Indique o preco para saber o desconto: \n";
    cin >> preco;

    desconto = (preco * 10) / 100; // regra de 3
    novop = preco - desconto;


    cout << " O novo pre�o com 10% de desconto �:\n";
    cout << "R$" << novop << endl;
}
