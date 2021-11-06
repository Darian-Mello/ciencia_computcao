#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int n1, n2, dif;

        cout << "informe o primeiro numero: \n";
    cin >> n1;

    cout << "informe o segundo numero: \n";
    cin >> n2;

    if ( n1 > n2)
        dif = n1 - n2;
    else if(n1<n2)
        dif = n2 - n1;

    cout << "a diferenca é: " << dif;
}
