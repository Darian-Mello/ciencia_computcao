#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define LIN 3
#define COL 6

int main(){
    setlocale(LC_ALL,"Portuguese");
    int M[3][6];
    int l,c, n;

    srand(time(NULL));
    for(l=0; l<LIN; l++){
        for(c=0; c<COL; c++){
            M[l][c] = rand()%50;
            cout << M[l][c] << "\t";
        }
        cout << endl ;
    }
    cout << endl;

    cout << "Informe um número: ";
    cin >>n;

     for(l=0; l<LIN; l++){
        for(c=0; c<COL; c++){
            M[l][c] = M[l][c] * n;
        }
    }
    for(l=0; l<LIN; l++){
        for(c=0; c<COL; c++){
            cout << M[l][c] << "\t";
        }
        cout << endl ;
    }
    cout << endl;
}
