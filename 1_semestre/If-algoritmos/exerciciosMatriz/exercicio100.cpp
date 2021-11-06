#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int m[8][4], v[32], i=0;

    srand(time(NULL));
    cout << "vetor V: " << endl;
    for(i=0; i<32; i++){
        v[i] = rand() % 50;
        cout << v[i] << "  ";
    }
    i=0;
    cout << "\n\nMatriz M:\n";
    for(int l=0; l<8; l++){
        for(int c=0; c<4; c++){
            m[l][c] = v[i];
            cout << m[l][c] << "\t";
            i++;
        }
        cout << endl;
    }
}

