#include <cstring>
#include <stdlib.h>
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    string txt[3], aux;

    for(int i=0; i<3; i++){
        cout << "Informe a " << i+1 << "ª string: ";
        getline(cin, txt[i]);
    }
    for(int q=0; q<3; q++){
        for(int i=0; i<2; i++){
            if(txt[i].size() > txt[i+1].size()){
                aux = txt[i+1];
                txt[i+1] = txt[i];
                txt[i] = aux;
            }
        }
    }
    system("cls");
    cout << "strings em ordem crescente:\n\n";
    for(int i=0; i<3; i++){
        cout << txt[i] << endl;
    }
}



