#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    do{
        cout << "informe um número inteiro menor ou igual a 10: ";
        cin >> n;
    }while(n > 10 || n < 0);

    for(int i=0; i <=10; i++){
        cout << "\n" << n << " X " << i << " = " << n*i;
    }
}
