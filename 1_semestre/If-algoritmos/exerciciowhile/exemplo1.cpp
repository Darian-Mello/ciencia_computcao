#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    char sexo;

    do{
        cout << "informe o sexo\n";
        cin >> sexo;
        sexo = toupper(sexo);
    }while (sexo != 'F' && sexo != 'M');

    cout << "O sexo informado foi: " << sexo << endl;
}
