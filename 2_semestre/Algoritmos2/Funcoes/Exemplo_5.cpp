#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    string texto;
    int v;
    cout<<"Digite um valor qualquer: ";
    getline(cin, texto);

    v = stoi(texto);
    //converte de string para inteiro mesma função que o atoi que
    //é usado para vetor de char

    cout << v << endl;

    v = v + 5;
    //após converter pode ser realizado operações matemáticas

    cout << v << endl;

    texto = to_string(v);
    //converte para texto novamente

    cout << texto << endl;
}

