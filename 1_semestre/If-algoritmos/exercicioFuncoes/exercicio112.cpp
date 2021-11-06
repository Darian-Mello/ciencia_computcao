#include <iostream>

using namespace std;

float calcula_media(float n1, float n2, float n3, char m);
main(){
    setlocale(LC_ALL,"Portuguese");
    float n[3], media;
    char m;

    do{
        cout << "Informe o tipo de m�dia que deseja obter(A-Aritm�tica, P-Ponderada, H-Harm�nica):\n";
        cin >> m;
        m = toupper(m);
    }while(m != 'A' && m != 'P'&& m != 'H');

    for(int i=0; i<3; i++){
        do{
            cout << "\nInforme a " << i+1 << "� nota: ";
            cin >> n[i];
        }while(n < 0);
    }

    media = calcula_media(n[0], n[1], n[2], m);

    cout << "\nA m�dia " << m << " de " << n[0] << ", " << n[1] << " e " << n[2] << " �: " << media << ".\n";
}

float calcula_media(float n1, float n2, float n3, char m){
    float media, aux;
    int i;

    if(m == 'A'){
        media = (n1 + n2 + n3) / 3;
    }
    else if(m == 'P'){
        media = ((n1*5) + (n2*3) + (n3*2)) / (5 + 3+ 2);
    }
    else{
        for(i = n1; i% (int)n1 != 0 || i% (int)n2 != 0 || i% (int)n3 != 0; i++){} //MMC
        aux = (i / n1) + (i / n2) + (i / n3); //Soma e divide as fra��es
        aux = aux / i;

        media = 3 / aux;

    }

    return media;
}


