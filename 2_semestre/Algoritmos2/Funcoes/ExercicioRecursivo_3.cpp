#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int calcula(int base, int exp);

main(){
    setlocale(LC_ALL,"Portuguese");
    int base, exp, result;

    cout << "Vamos calcular uma expenenciação!\n\n";
    do{
        cout << "Informe a base inteira e positiva: ";
        cin >> base;
        cout << "Informe o expoente inteiro e positivo: ";
        cin >> exp;
        if(base < 0 || exp < 0){
            MessageBox(NULL, "Tanto a base quanto o expoente devem ser ser positivos!", "Erro", MB_OK | MB_ICONINFORMATION);
            system("cls");
        }
    }while(base<0 || exp<0);

    result = calcula(base, exp);

    cout << endl << base << " ^ " << exp << " = " << result << endl;
}

int calcula(int base, int exp){
    int result;

    if(exp < 1){
        result = 1;
    }
    else{
        result = base * calcula(base, exp-1);
    }

    return result;
}

