#include <iostream>
#include <ctype.h>

using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int I, n;
    do{
        cin >> I;
    }while(1 > I && I >= 10^4);
    string vetor[I];
    for(n=0; n < I; n++){
        vetor[n] = "a";
    }
    n = 0;
    cout << "Feliz nat";
    while(n < I){
        cout << vetor[n];
        n++;
    }
    cout <<"l!";
}
