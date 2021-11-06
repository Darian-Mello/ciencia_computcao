#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
using namespace std;
#define LIN 5
#define COL 5
int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int M[LIN][COL];
    int l = 0,i=0;
    int c = 0;
    int SC[COL],SL[LIN];
    int aux,somal=0,somac;
    // Gerador de matriz M(5,5)
    for(int l=0; l<LIN; l++)
    {
        for(int c=0; c<COL; c++)
        {
            M[l][c] = rand()%99;
        }
    }
    //soma linha
    for(int l=0; l<LIN; l++)
    {
        somal=0;
        for(int c=0; c<COL; c++)
        {
            somal = M[l][c]+somal;
        }
        SL[i] = somal;
        i++;
    }
    //Soma Coluna!
    i=0;
    for(int c=0; c<COL; c++)
    {
        somac=0;
        for(int l=0; l<LIN; l++)
        {
            somac = M[l][c]+somac;
        }
        SC[i] = somac;
        i++;
    }
    //exibi a matriz
    for(int l=0; l<LIN; l++)
    {
        for(int c=0; c<COL; c++)
        {
            cout << M[l][c] << "\t";
        }
        cout << endl ;
    }
    cout << endl;
    // vetor SL
     cout << "SL[";
    for(int i=0; i<LIN; i++)
    {
        cout << SL[i];
        if(i<LIN-1)
            cout << ", ";
        else
            cout <<"]"<< endl;
    }
     // vetor SC
     cout << "SC[";
    for(int i=0; i<COL; i++)
    {
        cout << SC[i];
        if(i<COL-1)
            cout << ", ";
        else
            cout <<"]"<< endl;
    }
    cout << endl << endl;
    system("PAUSE");
}
