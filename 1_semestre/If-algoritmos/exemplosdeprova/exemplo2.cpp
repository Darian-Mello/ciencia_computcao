//A prefeitura de uma determinada cidade deseja fazer uma pesquisa entre
//seus habitantes, coletando os seguintes dados: sal�rio, idade e sexo. Construa
//um algoritmo para realizar a pesquisa, considerando um n�mero indeterminado
//de pessoas. A prefeitura deseja saber:
//a) O n�mero de pessoas participantes;
//b) A m�dia de sal�rio das pessoas participantes;
//c) O menor sal�rio e o maior sal�rio
//d) Quantidade de pessoas do sexo Masculino;
//e) A m�dia de idade de todas as pessoas.
#include <iostream>
#include <ctype.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    char sexo, denovo;
    int total = 0, totalm = 0;
    float mediasalarial, soma = 0, salario, maior = 0, menor = 0, mediaidade, idade, somaidade = 0;

    do{
        do{
            cout << "\nInforme o sal�rio da pessoa: ";
            cin >> salario;
        }while(salario <= 0 || salario >= 10000000);
        do{
            cout << "\nInforme a idade da pessoa: ";
            cin >> idade;
        }while(idade <=0 || idade >= 150);
        do{
            cout << "\nInforme o sexo da pessoa(M ou F): ";
            cin >> sexo;
            sexo = toupper(sexo);
        }while(sexo != 'M' && sexo != 'F');

        total++;
        if (sexo == 'M'){
            totalm++;
        }
        soma = soma + salario;
        mediasalarial = soma / total;

        if (total == 1){
            menor = salario;
        }
        if (salario > maior){
            maior = salario;
        }
        else if (salario < menor){
            menor = salario;
        }

        somaidade = idade + somaidade;
        mediaidade = somaidade / total;

        cout << "\ndeseja realisar outra pesquisa(digite S para continuar ou N para parar)? ";
        cin >> denovo;
        denovo = toupper(denovo);
    }while(denovo == 'S');

    cout << "\nO n�mero de pessoas participantes �: " << total;
    cout << "\nA m�dia de sal�rio das pessoas participantes �: " << mediasalarial;
    cout << "\nO menor sal�rio �: " << menor;
    cout << "\nO maior sal�rio �: " << maior;
    cout << "\nA quantidade de pessoas do sexo Masculino �: " << totalm;
    cout << "\nA m�dia de idade de todas as pessoas  �:" << mediaidade;
}
