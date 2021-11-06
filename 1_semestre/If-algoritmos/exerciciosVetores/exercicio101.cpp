#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
        int aux, num;
        vector <int> vetor;
        for(int i=0; i<20; i++){
            cout << "Informe o " << i+1 << "º número: ";
            cin >> num;
            vetor.push_back(num);
        }
        for(int k=0; k < 20; k++){
            for(int n=0; n < 19; n++){
                if(vetor[n] > vetor[n+1]){
                    aux = vetor[n];
                    vetor[n] = vetor[n+1];
                    vetor[n+1] = aux;
                }
            }
        }
        system("cls");
        for(int i=0; i<10; i++){
            cout << "Informe o " << i+20 << "º número: ";
            cin >> num;
            for(int t=0; t<=vetor.size(); t++){
                if(num <= vetor[t]){
                    for(int j=vetor.size(); j>=t; j--){
                        if(j == vetor.size())
                            vetor.push_back(vetor[j]);
                        else
                            vetor[j] = vetor[j-1];
                    }
                    vetor[t] = num;
                    for(int h = 0; h<vetor.size(); h++){
                        cout << "  " << vetor[h];
                    }
                    cout << "\n";
                    break;
                }
                else if(t==vetor.size()){
                    vetor.push_back(num);
                    for(int h = 0; h<vetor.size(); h++){
                        cout << "  " << vetor[h];
                    }
                    cout << "\n";
                    break;
                }
            }

        }
}

