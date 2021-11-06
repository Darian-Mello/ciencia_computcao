#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float peso, engordou, emagreceu, novomagro, novogordo;

    cout << " Informe o seu peso: ";
    cin >> peso;

    engordou = (peso * 15) / 100;
    emagreceu =  (peso * 20) / 100;

    novogordo = peso + engordou;
    novomagro = peso - emagreceu;

    cout << "se você engordar 15% sobre seu peso atual, seu peso será: " << novogordo << endl;
    cout << "se você engordar 20% sobre seu peeso atual, seu peso será: " << novomagro << endl;




}
