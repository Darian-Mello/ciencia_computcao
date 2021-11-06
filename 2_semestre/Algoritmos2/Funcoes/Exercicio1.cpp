#include <iostream>
using namespace std;

void leitura();
void calcula(float b1, float b2, float alt);
void mostra(float area);

main(){
    setlocale(LC_ALL,"Portuguese");
    cout << "Vamos calcular a área do trapézio!\n\n";
    leitura();
}
void leitura(){
    float base1, base2, altura;
    cout << "Informe o valor de uma base: ";
    cin >> base1;
    cout << "\nInforme o valor da outra base: ";
    cin >> base2;
    cout << "\nInforme a altura: ";
    cin >> altura;
    calcula(base1, base2, altura);
}
void calcula(float b1, float b2, float alt){
    float area = ((b1 + b2) * alt) / 2;
    mostra(area);
}
void mostra(float A){
    cout << "\n\nA área do trapézio é de: ";
    cout << fixed;
    cout.precision(2);
    cout << A << endl;
}


