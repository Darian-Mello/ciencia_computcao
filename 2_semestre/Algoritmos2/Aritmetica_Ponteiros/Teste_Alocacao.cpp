#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

main(){
    char *p = new char[128];
    int c=0;

    cout << "Informe um texto: ";
    gets(p);

    while(*p){
        if(!isspace(*p)){
            cout << *p;
        }
        p++;
        c++;
    }
    p = p-c;
    cout << endl << p;

    delete(p[c]);

}
