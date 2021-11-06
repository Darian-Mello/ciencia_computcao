#include <cstdlib>
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int idade;
    do{
        cout << "Informe a idade: (Se quiser parar a leitura de dados digite 0.) ";
        cin >> idade;
    }while(idade < 0 && idade > 150);

    cout << "fim";
}
