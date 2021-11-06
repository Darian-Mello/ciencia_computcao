//Criar um algoritmo que recebe a idade e o estado civil (C-casado, S-solteiro,V-viuvo
//e D-desquitado ou separado) de várias pessoas.
//Calcule e mostre:
//A quantidade de pessoas casadas
//A quantidade de pessoas solteiras
//A média das pessoas viúvas
//A percentagem de pessoas desquitadas ou separadas dentre todas as pessoas
//analisadas
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ctype.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    char x = 3, rode = 'S';
    int c=0, s=0, v=0, d=0;
    float viuvo=0, total=0;
    int idade = 0;

    while(rode == 'S'){
            system("cls");
        do{
            cout << "\nInforme a idade: ";
            cin >> idade;
        }while(idade <= 0 || idade > 105);
        do{
            cout << "\nInforme o estado civíl com: C-casado, S-solteiro, V-viuvo e D-desquitado ou separado: ";
            cin >> x;
        }while (x != 'c' && x != 'C' && x != 's' && x != 'S' && x != 'd' && x != 'D' && x != 'v' && x != 'V');

        x = toupper(x);

        if(x == 'C'){
            c = c + 1;
            total++;
        }
        else if(x == 'S'){
            s = s + 1;
            total++;
        }
        else if(x == 'V'){
            v = v + 1;
            viuvo = viuvo + idade; //Calculei a media de idade dos viuvos...
            total++;
        }
        else if(x == 'D'){
            d = d + 1;
            total++;
        }
    cout << "\n\nDeseja pesquisar sobre mais alguém? Digite s para sim e n para não: ";
    cin >> rode;
    rode = toupper(rode);

    }

    viuvo = viuvo / v;
    if (v <= 0)
        viuvo = 0;
    d = (d * 100) / total;

    cout << "\nA quantidade total de pessoas é: " << total;
    cout << "\nA quantidade de casados é: " << c;
    cout << "\nA quantidade de solteiros é: " << s;
    cout << "\nA media da idade de viúvos é: " << viuvo;
    cout << "\nA porcentagem de desquitadas ou separadas é: " << d;
}
