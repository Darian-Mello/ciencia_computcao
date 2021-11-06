#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float combustivel, distancia, consumo;

    cout << "informe a distancia percorrida em km: \n";
    cin >> distancia;

    cout << "informe o total de combustivel gasto em litros: \n";
    cin >> combustivel;

    consumo = distancia / combustivel;

    cout << "com cada litro você percorreu: " << consumo << "km"<< endl;
}

