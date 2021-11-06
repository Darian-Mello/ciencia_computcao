#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int n1, credito;
    cout << "informe o valor de seu saldo: \n";
    cin >> n1;

    if (n1 >= 0 && n1 <= 200){
        cout << " sou saldo é: " << n1 << " e voce nao possui creditos.";
    }
    else if (n1 >= 201 && n1 <= 400){
        credito = (n1 * 20) / 100;
        cout << "seu saldo é: " << n1 << " e com o credito de 20% voce possui um credito de:" << credito;
    }
    else if (n1 >= 401 && n1 <= 600){
        credito = (n1 * 30 ) / 100;
        cout << "seu saldo é: " << n1 << " e com o credito de 30% voce possui um credito de:" << credito;
    }
    else if (n1 > 601){
        credito = (n1 * 40) / 100;
        cout << "seu saldo é: " << n1 << " e com o credito de 40% voce possui um credito de:" << credito;
    }
}
