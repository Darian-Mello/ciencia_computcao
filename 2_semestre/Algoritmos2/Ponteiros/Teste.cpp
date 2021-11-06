/*#include<iostream>

using namespace std;

main(){
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;

    if(*p == i)
        cout << 3 * - ((*q + 7) / *p);
        //cout << **&p << "\t" <<  *&p << "\t" << &p << "\t" << p;

}*/
#include <iostream>
using namespace std;
int *p, a;
main()
{
p = &a;
cout << "Digite um valor para A: ";
cin >> a;
fflush(stdin);
*p = 3 * *p;
a += *p + 2;
cout << *p << endl;
getchar();
}


