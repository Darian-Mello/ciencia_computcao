#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float anos, meses, dias, semanas, nasceu, atual;

    cout << "informe o ano de seu nascimento: \n";
    cin >> nasceu;

    cout << "informe o ano atual: \n";
    cin >> atual;

    atual = atual - nasceu;
    anos = atual;
    dias = atual * 365;
    meses = dias / 30;
    semanas = dias / 7;

    cout << "sua idade em anos é:\n" << anos << endl;
    cout << "sua idade em meses é:\n" << meses << endl;
    cout << "sua idade em semanas é:\n" << semanas << endl;
    cout << "sua idade em dias é:\n" << dias << endl;
}

