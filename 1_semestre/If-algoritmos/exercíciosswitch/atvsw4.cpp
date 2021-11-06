#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float sal, saln;
    char car;

    cout << "Informe o seu salário atual:\n";
    cin >> sal;
    cout << "Informe o seu cargo apenas com a letra inicial\n";
    cin >> car;

    switch(car){
    case 'G':
    case 'g':
        saln = (sal * 30) / 100;
        sal =  sal + saln;
        cout << "Seu novo salário é:\n" << sal << endl;
        break;
    case 'T':
    case 't':
        saln = (sal * 50) / 100;
        sal =  sal + saln;
        cout << "Seu novo salário é:\n" << sal << endl;
        break;
    default:
        saln = (sal * 20) / 100;
        sal =  sal + saln;
        cout << "Seu novo salário é:\n" << sal << endl;
        break;
    }
}
