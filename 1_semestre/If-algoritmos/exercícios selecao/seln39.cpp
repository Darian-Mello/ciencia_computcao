#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int a, b, c, aux;

    cout << "informe o primeiro numero: \n";
    cin >> a;

    cout << "informe o segundo numero: \n";
    cin >> b;

    if (b > a){          // troca de a por b;
        aux = a;
        a = b;            //o codigo poderia ser feito com comparaçãoes, mas seria muito extenso.
        b = aux;
    }

    cout << "informe o terceiro numero: \n";
    cin >> c;

    if (b>c){
        aux = b;
        b = c;
        c = aux;
    }
    if (a>b){
        aux = a;
        a = b;
        b = aux;
    }
    cout << a << ", " << b << ", " << c << endl;
}
