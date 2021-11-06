#include <iostream>
#include <ctype.h>

using namespace std;
main(){
    setlocale(LC_ALL,"Portuguese");
    double A[10];
    int i;

    for(i=0; i<=9; i++){
        cin >> A[i];
    }

    for(i=0; i<10; i++){
        if(A[i] <= 10.0){
         std::cout.precision(1);
         std::cout << std::fixed << "A [" << i << "] = " << A[i] << endl;
        }
    }
}
