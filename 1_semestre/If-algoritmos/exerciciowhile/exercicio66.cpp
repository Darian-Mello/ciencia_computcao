#include <cstdlib>
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float p_salarial = 0, porcentF = 0, somaIdade = 0, mediaIda = 0;
    int idade, cargo, total = 0, totF = 0, pre_acima = 0;
    int c1=0, c2=0, c3=0, c4=0;
    char sexo;

    do{
        cout << "Para encerrar a leitura de candidatos e mostrar os resultados, basta digitar 0 para a idade.";
        do{
            cout << "\nInforme a idade: ";
            cin >> idade;
        }while(idade < 0 || idade > 100);
        if(idade == 0){break;}
        do{
            cout << "\nIforme sua pretensão salarial: ";
            cin >> p_salarial;
        }while(p_salarial < 0);
        do{
            cout << "\nInforme o sexo(F ou M): ";
            cin >> sexo;
            sexo = toupper(sexo);
        }while(sexo != 'F' && sexo != 'M');
        do{
            cout << "\nInforme o cargo: \n1(Coordenador de TI) \n2(Administrador de rede) \n3(Suporte técnico) \n4(Analista de suporte técnico)";
            cin >> cargo;
        }while(cargo != 1 && cargo != 2 && cargo != 3 && cargo != 4);

        total++;

        if (sexo == 'F'){totF++;}

        porcentF = (totF * 100.0) / total;
        somaIdade+= idade;
        mediaIda = somaIdade / total;

        switch (cargo){
        case 1:
            c1++;
            if(p_salarial > 9281){pre_acima++;}
            break;
        case 2:
            c2++;
            if(p_salarial > 5008){pre_acima++;}
            break;
        case 3:
            c3++;
            if(p_salarial > 6232){pre_acima++;}
            break;
        case 4:
            c4++;
            if(p_salarial > 4122){pre_acima++;}
            break;
        }

        system("Pause");
        system("cls");
    }while(idade != 0);

    system("cls");
    cout << "Foram registradas " << totF << " mulheres. O que corresponde " << porcentF << "% do total.";
    cout << "\n\nA idade média entre todos os candidatos é de: " << mediaIda << " anos.";
    cout << "\n\nForam incritos " << c1 << " candidatos no cargo 1, " << c2 << " candidatos no 2, " << c3 << " candidatos no 3, e " << c4 << " candidatos no 4.";
    cout << "\n\n" << pre_acima << " candidatos tiveram pretenção salarial acima da média.";

}
