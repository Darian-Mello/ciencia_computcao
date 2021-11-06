#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float reais, dolar, marco, libra;

    cout << "Digite a quania em reais: \n";
    cin >> reais;

    dolar = reais / 1.80;
    marco = reais / 2;
    libra = reais / 3.57;

    cout << "seu dineiro vale: \n";
    cout << dolar << " dolarar(es).\n";
    cout << marco << " marco alemão.\n";
    cout << libra << " libras esterlinas.\n";
}
