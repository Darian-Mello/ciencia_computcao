#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    char ma[5][5];
    bool dc=false;

    for(int l=0; l<5; l++){
        for(int c=4; c>=0; c--){
            if(c + l == 4){ // Na posicao da diagonal secundaria, a soma entre o indice de linha e coluna resultara
                ma[l][c] = '0'; //No tamanho da linha
                dc = true;
            }
            else if(dc == false){
                ma[l][c] = 'B';
            }
            else if(dc == true){
                ma[l][c] = 'A';
            }
        }
        dc = false;
    }
    for(int l=0; l<5; l++){
        for(int c=0; c<5; c++){
        cout << ma[l][c];
        if(c!=4){cout << " - ";}
        }
        cout << endl;
    }
}
