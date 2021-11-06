#include <cmath>
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float a, b, c, maior;

    cout << "informe o valor de a\n";
    cin >> a;

    cout << "informe o valor de b\n";
    cin >> b;

    cout << "informe o valor de c\n";
    cin >> c;

    maior = (a+b+abs(a-b))/2;
    maior = (maior+c+abs(maior-c))/2;

    cout << "o valor maior é: " << maior << endl;

}
