#include <iostream>
#include <stdlib.h>
#include <ctime>
#define tam 4
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int m[tam][tam], n[tam*tam], recebe;
    bool repete=false;

    srand(time(NULL));
    for(int i=0; i<(tam*tam); i++){
        do{
            repete = false;
            recebe = rand() % 16;
            if(i==0){
                n[i] = recebe;
                break;
            }
            for(int k=i; k>=0; k--){
                if(recebe == n[k])
                    repete = true;
            }
            if(repete == false)
                n[i] = recebe;
        }while(repete == true);
    }

    int i=0;
    cout << "matriz: \n";
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            m[l][c] = n[i];
            cout << m[l][c] << "\t";
            i++;
        }
        cout << endl;
    }
}
