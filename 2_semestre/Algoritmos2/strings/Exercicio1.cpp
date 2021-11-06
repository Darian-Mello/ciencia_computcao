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
    cout << "\nTexto sem os espaços: \n" << texto;
    cout << endl << "\n\nTexto sem os espaços e ao contrário: \n";

    for(int i=texto.size()-1; i>=0; i--){
        cout << texto[i];
    }
    cout << endl;
}
