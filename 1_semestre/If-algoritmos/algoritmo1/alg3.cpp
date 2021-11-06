#include <iostream> // para funcionar a entrada e saida
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese"); // serve para funcionar os acentos
    float preco, consumo, conta;
    cout << " Informe o valor(em Kg) do produto consumido:\n";
    cin >> preco;

    preco =  preco / 1000; // foi necessario tranformar o valor em gramas para kg

    cout << " Informe o consumo (em gramas):\n";
    cin >> consumo;

    conta = preco * consumo;

    cout << " O valor a ser pago é: " << conta << endl;



}

