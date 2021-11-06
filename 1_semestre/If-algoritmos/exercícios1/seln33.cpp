#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int n1, n2;

    cout << "informe o primeiro numero: \n";
    cin >> n1;

    cout << "informe o segundo numero: \n";
    cin >> n2;

    if ( n1 > n2)
        cout << "o maior é: " << n1 << endl;
    else if(n1<n2)
        cout << "o maior é: " << n2 << endl;
    else
        cout << "os numeros sao iguais";


}
