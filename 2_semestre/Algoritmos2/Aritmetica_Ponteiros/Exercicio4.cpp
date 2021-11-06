#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

bool verifica(char *txt, int tam);

main(){
    setlocale(LC_ALL, "Portuguese");
    string frase;
    bool palindromo;

    cout << "Informe uma frase para saber se forma um pal�ndromo(palavra ou um n�mero que se l� da mesma maneira nos dois sentidos):\n\n";
    getline(cin, frase);

    for(int i=0; i<frase.size(); i++){
        if(isspace(frase[i])){
            frase.erase(i, 1);
            i--;
        }
        frase[i] = toupper(frase[i]);
    }

    palindromo = verifica(&frase[0], frase.size()-1);

    if(palindromo == true)
        cout << "\n\nA frase informada forma um pal�ndromo!\n";
    else
        cout << "\n\nA frase informada N�O forma um pal�ndromo!\n";
}

bool verifica(char *txt, int tam){
    bool palindromo = true;

    for(int i=0, j=tam; i<=tam; i++, j--){
        //if(*(txt+i) != *(txt+j))
        if(txt[i] != txt[j])
            palindromo = false;
    }

    return palindromo;
}
