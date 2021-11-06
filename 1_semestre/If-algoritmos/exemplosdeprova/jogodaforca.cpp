#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    char palavra[30], secreta[30], errou[30], letra;
    int chance, i, h = 0;
    int tam = 0, acerto = 0;
    bool verificaacerto = false;
    do{
        cout << "Quatas erros serão permitidos? : ";
        cin >> chance;
    }while(chance < 1);

    cout << "Diga para seu amigo(a) tampar os olhos e informe a palavra: ";
    cin >> palavra;
    system("cls");

    for(i=0; palavra[i] != '\0'; i++, tam++){}

    for (i=0; i < tam; i++){
        secreta[i] = '-';
    }
    for(i = 0; i<30; i++){
        errou[i] = '¬';
    }

    while(chance > 0 && acerto < tam){
        cout << "\n n° vezes que você pode errar: " << chance;
        cout << "\n n° acertos: " << acerto;

        cout << "\ntentativas erradas: ";
        for(i=0; i<30; i++){
            if (errou[i] != '¬'){
                cout << errou[i] << " ";
            }
        }
        cout << "\n\nPalavra secreta: ";
        for (i=0; i < tam ; i++){
            cout << secreta[i];
        }
        cout << "\ninforme uma letra: ";
        cin >> letra;
        for (i = 0; i < tam; i++){
            if (letra == palavra[i]){
                verificaacerto = true;
                secreta[i] = letra;
                acerto ++;
            }
        }
        if(!verificaacerto){ // O mesmo que escrever verificaacerto == false;
            chance--;
            errou[h] = letra;
            h++;
        }
        verificaacerto = false;
        system("cls");
    }
    if (acerto == tam){
        cout << "\nParabéns! você acertou a palavra! ";
    }
    else
        cout << "\nQue pena, você não acertou a palavra. ";
}
