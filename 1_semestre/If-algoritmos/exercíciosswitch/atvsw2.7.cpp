#include <iostream>
#include <ctype.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int idade;

    do{
        cout << "Informe a sua idade: ";
        cin >> idade;

        switch(idade){
        case 5 ... 7:
            cout << "\nVoc� pertence a categoria Infantil A.\n";
            break;
        case 8 ... 10:
            cout << "\nVoc� pertence a categoria Infantil B.\n";
            break;
        case 11 ... 13:
            cout << "\nVoc� pertence a categoria Juvenil A.\n";
            break;
        case 14 ... 17:
            cout << "\nVoc� pertence a categoria Juvenil B.\n";
            break;
        case 18 ... 100:
            cout << "\nVoc� pertence a categoria Adulta.\n";
            break;
        default:
            cout << "\nvoc� digitou um valor inv�lido!\n";
        }
    }while(idade < 5 || idade > 101);
}
