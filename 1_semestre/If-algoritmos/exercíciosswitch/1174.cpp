#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
using namespace std;

main(){
    int x[4], i = 0;
    for(i = 0; i < 4; i++){
        cout << "Informe o valor da posicao " << i << endl;
        cin >> x[i];
    }
    for(i = 0; i < 4; i++){
        cout << "A[ "<< i << "] = " << x[i] << endl;
    }
//    while(i < 4){
//        cin >> x[i];
//        i++;
//    }
//    i = 0;
//    while(i < 4){
//        cout << x[i] << ", ";
//        i++;
//    }
}
