#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int m;
    float n, result;

    cout << "Informe o número: ";
    cin >> n;
    result = n;
    do{
        cout << "\nInforme o valor da potência: ";
        cin >> m;
    }while(m < 0);

    for(int i=1; i<m; i++){
        result = result * n;
    }
    system("cls");
    cout << n << " ^ " << m << " = " << result;
}
