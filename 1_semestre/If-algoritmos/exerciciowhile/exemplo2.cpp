#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    char sexo;

    cout << "informe o sexo:\n";
    cin >> sexo;

    while (sexo != 'F' && sexo != 'M'&& sexo != 'm' && sexo != 'f'){
        cout << "Informe um sexo válido\n";
        cin >> sexo;
    }

    cout << "O sexo informado foi: " << sexo << endl;
}
