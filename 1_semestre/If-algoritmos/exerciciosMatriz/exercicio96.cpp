#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int a[15][5], cont;

    srand(time(NULL));
    for(int l=0; l<15; l++){
        for(int c=0; c<5; c++){
           a[l][c] = rand() % 20;
            cout << a[l][c] << "\t";
        }
        cout << "\n\n";
    }
    system("pause");
    system("cls");

        for(int l=0; l<15; l++){
            for(int c=0; c<5; c++){
                cont = 0;
                for(int linha=0; linha<15; linha++){
                    for(int coluna=0; coluna<5; coluna++){
                        if(a[l][c] == a[linha][coluna]){
                            cont++;
                        }
                    }
                }
                cout << "O número " << a[l][c] << " se repete " << cont << " vezes. \n";
            }
        }
}
