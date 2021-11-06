#include <iostream>
using namespace std;

main(){
        setlocale(LC_ALL, "portuguese");
        float n1, n2, result;
        cout << "Digite um número\n";
        cin >> n1;

        cout << "Digite outro número\n";
        cin >> n2;

        result = n1 - n2;

        cout << "A subtração é:\n" << result;
}


