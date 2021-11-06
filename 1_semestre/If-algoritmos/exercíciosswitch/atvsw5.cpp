#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    char l;

    cout << "Informe uma vogal:\n";
    cin >> l;

    switch(l){
    case 'A':
    case 'a':
        cout << "primeira vogal\n";
        break;
    case 'E':
    case 'e':
        cout << "segunda vogal\n";
        break;
    case 'I':
    case 'i':
        cout << "terceira vogal\n";
        break;
    case 'O':
    case 'o':
        cout << "quarta vogal\n";
        break;
    case 'U':
    case 'u':
        cout << "quinta vogal\n";
        break;
    default:
        cout << "O valor digitado não é uma vogal";
        break;
    }
}
