//A prefeitura de uma determinada cidade deseja fazer uma pesquisa entre
//seus habitantes, coletando os seguintes dados: salário, idade e sexo. Construa
//um algoritmo para realizar a pesquisa, considerando um número indeterminado
//de pessoas. A prefeitura deseja saber:
//a) O número de pessoas participantes;
//b) A média de salário das pessoas participantes;
//c) O menor salário e o maior salário
//d) Quantidade de pessoas do sexo Masculino;
//e) A média de idade de todas as pessoas.
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
            cout << "\nInforme o salário da pessoa: ";
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

    cout << "\nO número de pessoas participantes é: " << total;
    cout << "\nA média de salário das pessoas participantes é: " << mediasalarial;
    cout << "\nO menor salário é: " << menor;
    cout << "\nO maior salário é: " << maior;
    cout << "\nA quantidade de pessoas do sexo Masculino é: " << totalm;
    cout << "\nA média de idade de todas as pessoas  é:" << mediaidade;
}
