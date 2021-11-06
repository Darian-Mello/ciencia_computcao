#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float base, altura, area;

    cout << " Digite o valor da base do triângulo: \n";
    cin >> base;

    cout << " Digite o valor da altura do triângulo: \n";
    cin >> altura;

    area = (altura * base) / 2;

    cout << " A área do triângulo é : "  << area << endl;
}
