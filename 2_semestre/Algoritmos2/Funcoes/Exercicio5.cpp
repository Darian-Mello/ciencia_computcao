#include <iostream>
using namespace std;

int calcula(int tipo, float fixo, float valorcarro);

main(){
    setlocale(LC_ALL,"Portuguese");
    float fixo, valorcarro;
    int tipo, meses;

    cout << "Olá João! \n\nInforme o tipo da sua correção: \n ";
    do{
        cout << "\n(1 – poupança, 2 – CD): ";
        cin >> tipo;
    }while(tipo != 1 && tipo != 2);

    cout << "\n\nInforme o valor que será aplicado mensalmente: ";
    cin >> fixo;

    cout << "\nInforme o valor do automóvel: ";
    cin >> valorcarro;

    meses = calcula(tipo, fixo, valorcarro);

    cout << "\n\nPartindo das informações fornecidas, João levará " << meses << " meses para juntar o valor necessário para comprar o carro. \n\n";
}

int calcula(int tipo, float fixo, float valorcarro){
    int cont=1;
    float porcent, valormes=fixo;

    if(tipo == 1){
        while(valormes < valorcarro){

            cont++;

            porcent = (valormes*0.14) / 100;
            valormes += porcent;
            valormes += fixo;
        }
    }
    else{
        while(valormes < valorcarro){

            cont++;

            porcent = (valormes*0.32) / 100;
            valormes += porcent;
            valormes += fixo;
        }
    }

    return cont;
}
