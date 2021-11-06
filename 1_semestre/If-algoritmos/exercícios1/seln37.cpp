#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int n1, n2;

    cout << "informe um numero: \n";
    cin >> n1;

    cout << "informe umtro numero: \n";
    cin >> n2;

    if ((n1 % n2) == 0)
        cout << "o primeiro numero é divisével pelo segundo";
    else
        cout << "os números não sao divisíveis";

}
