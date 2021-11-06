#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float mes;
    cout << "\nInforme o mes";
    cin >> mes;

    if( mes == 1)  // estrutura de seleçao simples
        cout << "janeiro\n";
    else if (mes == 2)  //estrutura composta
        cout << "fevereiro\n";
    else                //como é so uma linha de codigo, nao é necessario chaves, caso contrario sim
        cout << "outro\n";


}
