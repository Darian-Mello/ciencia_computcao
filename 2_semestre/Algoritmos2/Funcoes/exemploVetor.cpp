#include <iostream>
#include <ctime>
using namespace std;

void calcula(int v[]);
void calcula2(int v2[5][5]);

main(){
    setlocale(LC_ALL,"Portuguese");
    int v[10], v2[5][5];

    srand(time(NULL));
    for(int i=0; i<10; i++){
        v[i] = rand() % 100;
        cout << v[i] << "\t";
    }
    calcula(v);
    cout << "\n\n";
    for(int i=0; i<10; i++){
        cout << v[i] << "\t";
    }
    cout << "\n\n";


    for(int l=0; l<5; l++){
        for(int c=0; c<5; c++){
            v2[l][c] = rand() % 100;
            cout << v2[l][c] << "\t";
        }
        cout << endl;
    }
    calcula2(v2);
    cout << "\n\n";
    for(int l=0; l<5; l++){
        for(int c=0; c<5; c++){
            cout << v2[l][c] << "\t";
        }
        cout << endl;
    }
    cout << "\n\n";
}

void calcula(int v[]){
    for(int i=0; i<10; i++){
        v[i] = v[i] + 1;
    }
}
void calcula2(int v2[5][5]){
    for(int l=0; l<5; l++){
        for(int c=0; c<5; c++){
            v2[l][c] = v2[l][c] + 1;
        }
    }
}


