#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    string nome;

    cout << "Informe o nome do arquivo que deseja abrir: ";
    getline(cin, nome);

    ifstream arquivo(nome);
    char c;
    int cont=0;

    if(!arquivo.is_open()){
        cout << "\nErro ao abrir o arquivo!\n";
    }
    else{
        while(arquivo.get(c)){
            cout << c;

            if(c!= '\n')
                cont++;
        }

        cout << "\n\nO arquivo possui " << cont << " caracteres.\n";

        arquivo.close();
    }
}
