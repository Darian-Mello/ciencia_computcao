//7 -  Escreva um algoritmo que leia um peso na Terra
//e o n�mero de um planeta e imprima o valor do seu peso neste planeta.
//A rela��o de planetas � dada a seguir juntamente com o valor das gravidades relativas � Terra:
//    #    gravidade relativa    Planeta
//    1    0,37            Merc�rio
//    2    0,88            V�nus
//    3    0,38            Marte
//    4    2,64            J�piter
//    5    1,15            Saturno
//    6    1,17            Urano
//   Obs: Para calcular utilize a f�rmula a seguir: (planetaTerra / 10)  * gravidade.
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    int planeta;
    float peso, peson;

    do{
        cout << "Informe o peso em Kg:(peso terrestre): ";
        cin >> peso;
    }while(peso <= 0);

    do{
        cout << "\ninforme o n�mero correspondente ao planeta: ";
        cin >> planeta;
    }while(planeta < 1 || planeta > 6);

    switch(planeta){
    case 1:
        peson = (peso / 10)  * 0.37;
        break;
    case 2:
        peson = (peso / 10)  * 0.88;
        break;
    case 3:
        peson = (peso / 10)  * 0.38;
        break;
    case 4:
        peson = (peso / 10)  * 2.64;
        break;
    case 5:
        peson = (peso / 10)  * 1.15;
        break;
    case 6:
        peson = (peso / 10)  * 1.17;
        break;
    }

    cout << "\nO peso informado no planeta " << planeta << " equivale a: " << peson;
}
