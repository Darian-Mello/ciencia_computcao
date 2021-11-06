#include <iostream>
using namespace std;

int main(){
    int tempo, hora, minuto, segundo;

    cout << "Digite o tempo em segundos:\n";
    cin >> tempo;

    hora = tempo / 3600; // porque uma hora tem 3600 segundos. (se descobre o numero de horas)
    tempo = tempo % 3600; // porque o resto da divisão resulta nos minutos.
    minuto = tempo / 60; // uma hora so tem 60 min.
    tempo = tempo % 60; // resto da divisão resulta nos segundos.
    segundo = tempo;

    cout << "O tempo gasto foi: \n";
    cout <<  endl << hora << "h:" << minuto << "min:" << segundo << "s\n";

}

