#include <cstring>
#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    string nome, iniciais, cpf, dia, mes, ano;
    bool erroucpf;

    cout << "Informe o seu nome completo: ";
    getline(cin, nome);

    do{
    erroucpf = false;

    cout << "\nInforme somente os números do seu CPF: ";
    getline(cin, cpf);

    for(int i=0; i<cpf.size(); i++){
        if(!isdigit(cpf[i]))
            erroucpf = true;
    }
    if(cpf.size() != 11)
        erroucpf = true;
    if(erroucpf == true)
        cout << "\nSeu CPF deve ser informado com 11 NÚMEROS!\n\n";

    }while(erroucpf == true);

    cout << "\nInforme o dia do seu nascimento: ";
    cin >> dia;
    cout << "\nInforme o mês do seu nascimento: ";
    cin >> mes;
    cout << "\nInforme o ano do seu nascimento: ";
    cin >> ano;

    if(dia.size() == 1)
        dia = '0' + dia;
    if(mes.size() == 1)
        mes = '0' + mes;
    dia = dia + "/" + mes + "/" + ano;

    cpf.insert(3, 1, '.');
    cpf.insert(7, 1, '.');
    cpf.insert(11, 1, '-');

    iniciais = toupper(nome[0]);
    for(int i=0; i < nome.size(); i++){
        if(isspace(nome[i])){
            iniciais += toupper(nome[i+1]);
        }
    }

    system("cls");
    cout << "Seu nome(Abreviado): \n";
    cout << iniciais;
    cout << "\n\nSeu CPF: \n";
    cout << cpf;
    cout << "\n\nSua data de nascimento: \n";
    cout << dia;

}




