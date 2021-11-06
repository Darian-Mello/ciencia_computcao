#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float preco, pagamento, litros;

    cout << "Informe o preço da gasolina: \n";
    cin >> preco;

    cout << "Informe o valor pago: \n";
    cin >> pagamento;

    litros = pagamento / preco;

    cout << "o total de litros colocados em seu tanque é: \n" << litros << endl;
}
