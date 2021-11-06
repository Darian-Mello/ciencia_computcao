#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float pao = 0.41, broa = 3.50, total, doar;
    int npaes, nbroas;

    cout << "Informe a quantidade de pãezinhos vendidos: ";
    cin >> npaes;
    cout << "Informe a quantidade de broas vendidas: ";
    cin >> nbroas;

    pao = pao * npaes;
    broa = broa * nbroas;
    total = pao + broa;

    doar = (total*5)/100;
    total -= doar;

    cout << fixed;
    cout.precision(2);
    cout << "\n\nSeus lucros totais foram de R$" << total + doar;
    cout << "\n5% desse valor equivale a R$" << doar;
    cout << "\nAo doar 5%, você ainda terá R$" << total << endl;
}
