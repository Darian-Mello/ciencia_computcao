#include <iostream>

using namespace std;

int fibo(int n1, int n2, int i);

main(){
    setlocale(LC_ALL,"Portuguese");
    cout << "A sequencia de fibonacci:\n\n ";

    fibo(0, 1, 1);
    // O primeiro e segundo parametros serao utilizados para formar o proximo numero.
    // Ja o terceiro parametro indica a quantidade de termos que serao exibidos.
    cout << endl;

}

int fibo (int n1, int n2, int i){
    if( i <= 20){
         cout << n2 << "\t";
         return fibo(n2, n1+n2, i+1);
    }
    else
        return 0;
}
