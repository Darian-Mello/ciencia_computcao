#include <cstring>
//#include <string>
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    string texto;

    cout << "Informe um texto: ";
    getline(cin, texto);
    for(int i=0; i<texto.size(); i++){
        if(isspace(texto[i])){
            texto.erase(i, 1);
            i--;
        }
    }
    cout << "\nTexto sem os espa�os: \n" << texto;
    cout << endl << "\n\nTexto sem os espa�os e ao contr�rio: \n";

    for(int i=texto.size()-1; i>=0; i--){
        cout << texto[i];
    }
    cout << endl;
}
