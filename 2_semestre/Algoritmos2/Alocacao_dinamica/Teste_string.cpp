#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <windows.h>
#include <math.h>

void apaga(char *txt);

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    char *texto = new char[70];

    cout << "Informe uma string: ";
    cin.getline(texto, 70);

    system("cls");

    cout << "string original: \n";
    puts(texto);
    cout << strlen(texto);

    apaga(texto);

    cout << "\n\nstring sem os espaços: \n";
    puts(texto);
    cout << strlen(texto);

    delete []texto;
}

void apaga(char *txt){
    for(int i=0; i<strlen(txt); i++){

        if(isspace(txt[i])){

            for(int j=i; j<strlen(txt); j++){
                *(txt + j) = *(txt + (j+1));
            }
            i--;
        }
    }
}




