#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int n, cont, soma=0, termo1 = 0, termo2 = 1, x;

    cout << "Informe o número de termos da série de Fibonacci que deseja ver: ";
    cin >> n;
    cout << endl;

    for(cont = 1; cont <= n; cont++){
        x = termo1 + termo2;
        termo1 = termo2;
        termo2 = x;
        cout << "\t" << termo1;
    }
}
