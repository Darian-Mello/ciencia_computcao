#include <iostream>
#include <stdlib.h>
#include <ctime>
//#include <string>
#define tam 6
using namespace std;

string multi(int M[tam][tam]);

main(){
    setlocale(LC_ALL,"portuguese");
    int M[tam][tam];
    string massa;

    srand(time(NULL));
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            M[i][j] = rand() % 50;
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n Nova matriz; \n\n";
    massa = multi(M);
    cout << "\n\n\n" << massa;
}
string multi(int M[tam][tam]){
    string massa;
    int menor;
    for(int i=0; i<tam; i++){
        menor = M[i][i];
        for(int j=0; j<tam; j++){
            if(M[i][j] < menor){
                menor = M[i][j];
            }
        }
        for(int j=0; j<tam; j++){
            M[i][j] = M[i][j] * menor;
            cout << M[i][j] << "\t";
        }
        cout << "\n";
    }
    massa = "iiiiiiiiiiihhhhhuhhuuuuuuuulllllllll!!!!!!!!!!!";
    return massa;
}
