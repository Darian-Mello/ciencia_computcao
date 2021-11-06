#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ctype.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float sai, n;
    float ma, a1, a2;
    float mp, p1, p2, p3, peso1, peso2, peso3;

    while(n != 3){
        cout << "Digite:\n1 – Média Aritmética \n2 – Média Ponderada \n3 – Sair\n";
        cin >> n;
        system("cls");

        if(n == 1){
            cout<<"\nMédia Aritmética:";
            cout << "\ninforme a primeira nota: ";
            cin >> a1;
            cout << "\ninforme a segunda nota: ";
            cin >> a2;

            ma = (a1 + a2) / 2;
            cout << "\nA média aritmética é: " << ma << endl << endl;
        }
        else if(n == 2){
            cout << "Média Ponderada:\n";
            cout << "\nInforme o peso da primeira nota: ";
            cin >> peso1;
            cout << "\ninforme a primeira nota: ";
            cin >> p1;
            cout << "\nInforme o peso da segunda nota: ";
            cin >> peso2;
            cout << "\ninforme a segunda nota: ";
            cin >> p2;
            cout << "\nInforme o peso da terceira nota: ";
            cin >> peso3;
            cout << "\nInforme a terceira nota: ";
            cin >> p3;

            mp = (p1 * peso1)+(p2 * peso2)+(p3 * peso3);
            peso1 = (peso1 + peso2) + peso3;
            mp = mp / peso1;
            cout << "\nA média ponderada é: " << mp << endl << endl;
        }
    }
}
