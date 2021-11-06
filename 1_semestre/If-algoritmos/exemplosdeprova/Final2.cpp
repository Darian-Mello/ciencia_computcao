#include <iostream>
#include <stdlib.h>
#include <ctime>
//#include <string>
#define tam 6
using namespace std;

string multi(int M[tam][tam]);

main(){
    setlocale(LC_ALL,"portuguese");
    int n, t;
    cin >> n;
    cout << "\n";
    for(int i=1; i<=n; i++){
        t=i;
        cout << i << "\t";
        for(int j=1; j<i; j++){
            t+=i;
            cout << t << "\t";
        }
        cout << endl;
    }
}

