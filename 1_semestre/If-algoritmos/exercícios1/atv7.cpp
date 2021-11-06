#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float eleitores, brancos, nulos, validos;

    cout << " digite o número total de eleitores; \n"; // o código seguiu o enunciado, mas se o usuário digitar um número
    cin >> eleitores;                                  // de brancos e nulos que não bata com o de eleitores, da erro.

    cout << "digite o total de votos brancos: \n";
    cin >> brancos;

    cout << "digite o total de votos nulos: \n";
    cin >> nulos;

    validos = eleitores - (brancos + nulos); // A missão era encontrar o percentual de votos validos, brancos e nulos com relaçao ao numero de eleitores.
    validos = (validos * 100) / eleitores;   // entao foram feitas as regras de 3 para descobrir o valor
    nulos = (nulos * 100) / eleitores;
    brancos = (brancos * 100) / eleitores;

    cout << "de acordo com as informações: \n";
    cout << nulos << "% dos votos são nulos. \n";
    cout << brancos << "% dos votos são brancos. \n";
    cout << validos << "% dos votos são válidos. \n";

}

