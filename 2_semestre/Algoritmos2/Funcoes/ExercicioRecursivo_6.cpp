#include <iostream>
#include <windows.h>

using namespace std;

float harmonica(float n, float i);

main(){
    setlocale(LC_ALL,"Portuguese");
    float n, result;

    do{
        cout << "\nInforme a posi��o que seseja saber o n�mero Harm�nico correspondente: ";
        cin >> n;

        if(n < 1)
            MessageBox(NULL, "A posi��o deve ser maior ou igual a 1", "Erro", MB_OK | MB_ICONEXCLAMATION);
    }while(n < 1);

    result = harmonica(n, 1);

    cout << "\n\nO n�mero harm�nico �: " << result << endl;
}

float harmonica(float n, float i){
    float result;

    if(i <= n){
        result = (1/i) + harmonica(n, i+1);
    }

    return result;
}

