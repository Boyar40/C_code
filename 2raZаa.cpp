#include <iostream>
using namespace std;

int x(int x) 
{
    return x >= 0 ? x * 2 : -x;
}

int main()
{
    int y;
    cout << "Введите число" << endl;
    cin >> y;
    cout << x(y);
    return 0;
}

