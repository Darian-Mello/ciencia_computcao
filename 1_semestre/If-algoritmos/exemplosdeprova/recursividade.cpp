#include <iostream>
#include <ctype.h>

using namespace std;

int contador(int inicio, int fim){
    if(inicio <= fim){
        cout << " " << inicio;
        contador(++inicio, fim);
    }
}
int fatorial(int fatorando, int n1){;
    if(fatorando > 1){
        n1 = n1 * (fatorando - 1);
        fatorando--;
        fatorial(fatorando, n1);
    }
    else{
        cout << endl << n1;
    }
}
int fibo(int n, int i1, int i2, int r, int cont){
    if (cont <= n){
        r = i1 + i2;
        i1 = i2;
        i2 = r;
        cont ++;
        cout << " " << i1;
        fibo(n, i1, i2, r, cont);
    }
}
main(){
    setlocale(LC_ALL,"Portuguese");
    int n, i1, i2, r, cont;

    //int fatorando, n1;

//    int inicio, fim;

//    cout << "Informe o inicio da contagem: ";
//    cin >> inicio;
//    cout << "\nInforme o fim da contagem: ";
//    cin >> fim;
//    cout << endl;
//    contador (inicio, fim);

//    cout << "Informe o Número a ser fatorado: ";
//    cin >> fatorando;
//    n1 = fatorando;
//    fatorial(fatorando, n1);

    cout << "Informe a quantidade de números fibonacci a serem contados: ";
    cin >> n;
    fibo(n, i1 = 0, i2 = 1, r = 0, cont = 0);
}


