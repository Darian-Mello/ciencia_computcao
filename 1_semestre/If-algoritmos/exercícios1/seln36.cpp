#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int n1, n2, n3;

    cout << "informe a primeira altura (a1) \n";
    cin >> n1;

    cout << "informe a segunda altura (a2) \n";
    cin >> n2;

    cout << "informe a terceira altura (a3) \n";
    cin >> n3;

    if (n1 >= n2 && n1 >= n3)
        cout << " a maior é: \n" << "a1";
    if (n2 >= n2 && n2 >= n3)
        cout << " a maior é: \n" << "a2";
    if (n3 >= n1 && n3 >= n2)
        cout << " a maior é: \n" << "a3";

}
