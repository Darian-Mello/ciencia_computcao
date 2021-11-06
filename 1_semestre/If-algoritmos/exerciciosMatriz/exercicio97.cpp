#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int m[3][3], cont=1;

    for(int l=0; l<3; l++){
        for(int c=0; c<3; c++){
            cout << "Informe o " << cont << "º elemento: ";
            cin >> m[l][c];
            cont++;
        }
    }
    system("cls");
    cout << "A matriz inserida foi: \n";
    int menor = m[0][0], linha=0, coluna=0;
    for(int l=0; l<3; l++){
        for(int c=0; c<3; c++){
            cout << m[l][c] << "\t";
            if(m[l][c] < menor){
                menor = m[l][c];
                linha = l;
                coluna = c;
            }
        }
        cout << endl;
    }
    cout << "\nO menor número digitado foi: " << menor << ", na posição " << linha << "," << coluna << endl;
}

