#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int tempo, anos, meses, dias;

    cout << "informe sua idade em dias: ";
    cin >> tempo;

    anos = tempo / 365;
    tempo = tempo % 365;
    meses = tempo / 30;
    dias = tempo % 30;

    cout << "suua idade �:\n" << anos << " ano(s) " << meses << " m�s(ses) " << dias << " dia(s).\n";
}
