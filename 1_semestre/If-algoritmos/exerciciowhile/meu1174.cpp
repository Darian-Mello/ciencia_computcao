#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
using namespace std;

main(){
    float x[100];
    int A = 0;
//    for(i = 0; i < 4; i++){
//        cout << "Informe o valor da posicao " << i << endl;
//        cin >> x[i];
//    }
//    for(i = 0; i < 4; i++){
//        cout << "A[ "<< i << "] = " << x[i] << endl;
//    }
    srand(time(NULL));
    while(A < 100){

        x[A] = rand() % 100;
        A++;
    }
    A = 0;
    while(A < 100){
        if(x[A] > 0 && x[A ])
        cout << "A[ "<< A << "] = " << x[A] << endl;
        A++;
    }
}

