#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese");
    float val1, val2, media;
    cout << "digite um n�mero:\n";
    cin >> val1;

    cout << "digite outro n�mero\n";
    cin >> val2;

    media = (val1 + val2) / 2;

    cout << "A m�dia entre os n�meros �:\n" << media;

}
