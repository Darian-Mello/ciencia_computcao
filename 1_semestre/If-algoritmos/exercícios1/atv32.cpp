#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float celsius, f;

    cout << "Digite a temperatura em celcius para saber em fahrenheit:\n";
    cin >> celsius;

    f = 180 * (celsius + 32);
    f = f / 100;

    cout << "Atemperatura em fahrenheit é: " << f << endl;

}
