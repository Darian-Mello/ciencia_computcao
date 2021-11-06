#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    char s;
    string nome;
    float h, idade, pesoi;

    cout << "informe seu nome: \n";
    cin >> nome;
    cout << "informe a sua idade: \n";
    cin >> idade;
    cout << "informe seu sexo com (M) para masculino e (F) para feminino: \n";
    cin >> s;
    cout << "informe a sua altura em m(com casas decimais):\n";
    cin >> h;

    cout << endl << nome << ": ";

    if (idade > 0 && idade < 200){
        if (h > 0 && h <= 4){
            if (s == 'm' || s == 'M'){
                if (h > 1.70){
                    if (idade <= 20) {
                        pesoi = (72.7 * h) - 58;
                        cout << "seu peso ideal é: " << pesoi << "kg\n.";
                    }
                    else if (idade >= 21 && idade <= 39){
                        pesoi = (72.7 * h) - 53;
                        cout << "seu peso ideal é: " << pesoi << "kg\n.";
                    }
                    else if (idade >= 40){
                        pesoi = (72.7 * h) - 45;
                        cout << "seu peso ideal é: " << pesoi << "kg\n.";
                    }
                }
                else if (h <= 1.70){
                    if (idade <= 40){
                        pesoi = (72.7 * h) - 50;
                        cout << "seu peso ideal é: " << pesoi << "kg\n.";
                    }
                    else if (idade > 40){
                        pesoi = (72.7 * h) - 58;
                        cout << "seu peso ideal é: " << pesoi << "kg\n.";
                    }
                }
            }
            else if (s == 'f' || s == 'F'){
                if (h < 1.50){
                    (62.1*h) - 44.7;
                    cout << "seu peso ideal é: " << pesoi << "kg\n.";
                }
                else if( h >= 1.50){
                    if(idade >= 35){
                        (62.1*h) - 45;
                        cout << "seu peso ideal é: " << pesoi << "kg\n.";
                    }
                    else if(idade < 35){
                        (62.1*h) - 49;
                        cout << "seu peso ideal é: " << pesoi << "kg\n.";
                    }
                }
            }
            else
                cout << "voce digitou um valor inválido.\n";
        }
        else
            cout << "voce digitou um valor inválido.\n";
    }
    else
        cout << "voce digitou um valor inválido.\n";
}
