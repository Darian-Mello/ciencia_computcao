//Fa�a um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as
//m�dias das pessoas das pessoas da mesma faixa et�ria. As faixas et�rias s�o : de 1 a 10 anos,
//de 11 a 20 anos, de 21 a 30 anos e de 31 anos para cima.
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int cont;
    float idade, peso, xa=0,xb=0,xc=0,xd=0, mediaa = 0, mediab =0, mediac=0, mediad=0;

    for (cont=1; cont<=15; cont++){
        do{
            cout << "\nInforme a idade da " << cont << "� pessoa: ";
            cin >> idade;
        }while(idade <= 0);
        do{
            cout << "\nInforme o peso da " << cont << "� pessoa: ";
            cin >> peso;
        }while(peso <= 0);

        if(idade >= 1 && idade <= 10){
            xa++;
            mediaa = mediaa + peso;
        }
            if(idade >= 11 && idade <= 20){
            xb++;
            mediab = mediab + peso;
        }
            if(idade >= 21 && idade <= 30){
            xc++;
            mediac = mediac + peso;
        }
        if(idade >= 31){
            xd++;
            mediad = mediad + peso;
        }
    }

    cout << "\nA m�dia do(s) peso(s) digitado(s) na fixa etaria de 1 a 10 anos foi: " << mediaa / xa;
    cout << "\nA m�dia do(s) peso(s) digitado(s) na fixa etaria de 11 a 20 anos foi: " << mediab / xb;
    cout << "\nA m�dia do(s) peso(s) digitado(s) na fixa etaria de 21 a 30 anos foi: " << mediac / xc;
    cout << "\nA m�dia do(s) peso(s) digitado(s) na fixa etaria acima de 31 anos foi: " << mediad / xd;
}

