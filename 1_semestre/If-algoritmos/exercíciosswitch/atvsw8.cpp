//Faça um algoritmo que leia o tempo de corrida de uma pessoa e imprima a quantidade de calorias que essa pessoa perdeu durante a corrida.
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int tempo;

    do{
        cout << "Informe o tempo que vocêcorreu(em minutos): ";
        cout << "\nVocê deve digitar 15, 30, 60, 90 ou 120: ";
        cin >> tempo;
    }while(tempo != 15 && tempo != 30 && tempo != 60 && tempo != 90 && tempo != 120);

    switch(tempo){
    case 15:
        cout << "\nVocê perdeu 170 calorias\n";
        break;
    case 30:
        cout << "\nVocê perdeu 350 calorias\n";
        break;
    case 60:
        cout << "\nVocê perdeu 700 calorias\n";
        break;
    case 90:
        cout << "\nVocê perdeu 1050 calorias\n";
        break;
    case 120:
        cout << "\nVocê perdeu 1400 calorias\n";
        break;
    }
}
