#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float n, maior, menor;

    cout << " digite o primeiro numero: \n";
    cin >> n;
            maior = n;
            menor = n;
    cout << " digite o segundo numero: \n";
    cin >> n;
                if (n > maior){
                        maior = n;
                }
                if (n < menor){
                        menor = n;
                }

    cout << " digite o terceiro numero: \n";
    cin >> n;
            if (n > maior){
                    maior = n;
            }
            if (n < menor){
                    menor = n;
            }

    cout << " digite o quarto numero: \n";
    cin >> n;
            if (n > maior){
                    maior = n;
            }
            if (n < menor){
                    menor = n;
            }

    cout << " digite o quinto numero: \n";
    cin >> n;
            if (n > maior){
                    maior = n;
            }
            if (n < menor){
                    menor = n;
            }
    cout << endl << "O número maior é: " << maior << endl;
    cout << "O número menor é: " << menor << endl;
}
