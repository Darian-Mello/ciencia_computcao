#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int n, nprimos=0, primos=0, total=0, verifica = 1;
    bool primo = true;

    cout << "Informe um n�mero para saber se � primo!\n";
    do{
        cout << "\nInforme um n�mero inteiro: ";
        cin >> n;
        for(int i=2; i<n; i++){
            if(n % i == 0)
                primo = false;
        }
        total++;
        if(primo == true){
            primos++;
            cout << "\n\nO n�mero " << n << " � primo!";
        }
        else{
            nprimos++;
            cout << "\n\nO n�mero " << n << " n�o � primo!";
        }

        cout << "\n\nDeseja verificar outro n�mero(1 - sim, 2 - n�o)? ";
        cin >> verifica;

        primo = true;
        system("cls");
    }while(verifica == 1);

    cout.width(50) << cout.fill('.');
    cout << left << "\nTotal de n�meros informados:";
    cout << total;

    cout.width(50);// << cout.fill('.');
    cout << left << "\nTotal de n�meros primos informados:";
    cout << primos;

    cout.width(50) << cout.fill('=');
    cout << left << "\nTotal de n�meros n�o primos informados:";
    cout << nprimos << endl;
}

