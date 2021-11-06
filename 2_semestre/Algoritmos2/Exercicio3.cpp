#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n, nprimos=0, primos=0, total=0, verifica = 1;
    bool primo = true;

    cout << "Informe um número para saber se é primo!\n";
    do{
        cout << "\nInforme um número inteiro: ";
        cin >> n;
        for(int i=2; i<n; i++){
            if(n % i == 0)
                primo = false;
        }
        total++;
        if(primo == true){
            primos++;
            cout << "\n\nO número " << n << " é primo!";
        }
        else{
            nprimos++;
            cout << "\n\nO número " << n << " não é primo!";
        }

        cout << "\n\nDeseja verificar outro número(1 - sim, 2 - não)? ";
        cin >> verifica;

        primo = true;
        system("cls");
    }while(verifica == 1);

    cout.width(50) << cout.fill('.');
    cout << left << "\nTotal de números informados:";
    cout << total;

    cout.width(50);// << cout.fill('.');
    cout << left << "\nTotal de números primos informados:";
    cout << primos;

    cout.width(50) << cout.fill('=');
    cout << left << "\nTotal de números não primos informados:";
    cout << nprimos << endl;
}

