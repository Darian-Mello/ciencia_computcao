#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int num;

    cout << "informe o n�mero: \n";
    cin >> num;

    if ((num % 2) == 0)
        cout << "o numero � par";
    else
        cout << "o numero � impar";

}
