#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese");
    float val1, val2, media;
    cout << "digite um nímero:\n";
    cin >> val1;

    cout << "digite outro número\n";
    cin >> val2;

    media = (val1 + val2) / 2;

    cout << "A média entre os números é:\n" << media;

}
