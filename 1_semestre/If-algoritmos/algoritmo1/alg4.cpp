#include <iostream> // para funcionar a entrada(o que aparece na tela) e saida(o que o usuario digita)
using namespace std; // Um namespace permite a definição de estruturas. sem isso teria que acrecentar std antes de vada cout e cin.

main(){
    setlocale(LC_ALL, "portuguese"); // serve para funcionar os acentos
    float conta, garcom, vtotal;

    cout << " informe o valor total da conta: \n"; // cout << imprime
    cin >> conta;                                  // endl e \n significam a mesma coisa, quebram a linha

    garcom = (conta*10)/100;

    cout << "O valor da conta é: " << conta << endl;
    cout << "O valor da gorjeta é: " << garcom << endl;
    cout << "O valor total com a gorjeta é: " << conta + garcom << endl;

}


