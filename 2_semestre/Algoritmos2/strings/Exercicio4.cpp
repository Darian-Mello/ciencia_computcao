#include <cstring>
#include <stdlib.h>
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    string txt;
    int total, totspace=0, totvo=0, totco=0, totnum=0, totspecial=0;

    cout << "Informe um texto qualquer: ";
    getline(cin, txt);

    total = txt.size();
    for(int i=0; i<total; i++){
        if(isalpha(txt[i])){
            if(toupper(txt[i]) == 'A' || toupper(txt[i]) == 'E' || toupper(txt[i]) == 'I' || toupper(txt[i]) == 'O' || toupper(txt[i]) == 'U')
                totvo++;
            else
                totco++;
        }
        else if(isspace(txt[i])){
            totspace++;
        }
        else if(isdigit(txt[i])){
            totnum++;
        }
        else{
            totspecial++;
        }
    }
    cout << "\nTotal de caracteres no texto: " << total;
    cout << "\nTotal de espaços em branco no texto: " << totspace;
    cout << "\nTotal de vogais no texto: " << totvo;
    cout << "\nTotal de consoantes no texto: " << totco;
    cout << "\nTotal de números no texto: " << totnum;
    cout << "\nTotal de caracteres especiais no texto: " << totspecial;
}

