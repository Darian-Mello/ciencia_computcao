#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float base, altura, area;

    cout << " Digite o valor da base do tri�ngulo: \n";
    cin >> base;

    cout << " Digite o valor da altura do tri�ngulo: \n";
    cin >> altura;

    area = (altura * base) / 2;

    cout << " A �rea do tri�ngulo � : "  << area << endl;
}
