#include <iostream>
using namespace std;

main(){
        setlocale(LC_ALL, "portuguese");
        float n1, n2, result;
        cout << "Digite um n�mero\n";
        cin >> n1;

        cout << "Digite outro n�mero\n";
        cin >> n2;

        result = n1 - n2;

        cout << "A subtra��o �:\n" << result;
}


