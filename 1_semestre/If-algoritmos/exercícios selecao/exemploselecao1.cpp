#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float mes;
    cout << "\nInforme o mes";
    cin >> mes;

    if( mes == 1)  // estrutura de sele�ao simples
        cout << "janeiro\n";
    else if (mes == 2)  //estrutura composta
        cout << "fevereiro\n";
    else                //como � so uma linha de codigo, nao � necessario chaves, caso contrario sim
        cout << "outro\n";


}
