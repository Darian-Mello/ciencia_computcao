#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float eleitores, brancos, nulos, validos;

    cout << " digite o n�mero total de eleitores; \n"; // o c�digo seguiu o enunciado, mas se o usu�rio digitar um n�mero
    cin >> eleitores;                                  // de brancos e nulos que n�o bata com o de eleitores, da erro.

    cout << "digite o total de votos brancos: \n";
    cin >> brancos;

    cout << "digite o total de votos nulos: \n";
    cin >> nulos;

    validos = eleitores - (brancos + nulos); // A miss�o era encontrar o percentual de votos validos, brancos e nulos com rela�ao ao numero de eleitores.
    validos = (validos * 100) / eleitores;   // entao foram feitas as regras de 3 para descobrir o valor
    nulos = (nulos * 100) / eleitores;
    brancos = (brancos * 100) / eleitores;

    cout << "de acordo com as informa��es: \n";
    cout << nulos << "% dos votos s�o nulos. \n";
    cout << brancos << "% dos votos s�o brancos. \n";
    cout << validos << "% dos votos s�o v�lidos. \n";

}

