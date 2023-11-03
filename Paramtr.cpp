#include <math.h>
#include <iostream>
using namespace std;

void x(int &y, int &y1) 
{
    pow(y, 2);
    pow(y1, 4);
    cout << y << y1;
}

int main()
{
    int P;
    int S;
    int stor;
    int o;

    cout << "Введите сторону квадрата" << endl;
    cin >> stor;
    x(P, S);

    o = P > S ? P : S;
    cout << o;

    return 0;
    
}
