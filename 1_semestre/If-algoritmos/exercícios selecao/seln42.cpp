
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    float h, pesoi;
    char s;

    cout << "Informe o seu sexo, com (M) para masculino, e (F) para feminino\n";
    cin >> s;

    cout << "Informe a sua altura: \n";
    cin >> h;
    if (h > 0 && h < 200){
        if (s == 'm' || s == 'M' ){
            pesoi = (72.7 * h) - 58;
            cout << "Como homem, seu peso ideal é: \n" << pesoi << endl;
        }
        else if (s == 'f' || s == 'F'){
            pesoi = (62.1 * h) - 47.7;
            cout << "Como mulher, seu peso ideal é: \n" << pesoi << endl;
        }
        else
            cout << "\nVoçe digitou um valor invalido.\n";
    }
    else {
       cout << "\nVoçe digitou um valor invalido.\n";
    }
}
