#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int num;

    cout << "informe o número: \n";
    cin >> num;

    if ((num % 2) == 0)
        cout << "o numero é par";
    else
        cout << "o numero é impar";

}
