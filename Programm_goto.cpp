#include <iostream>
using namespace std;

int main()
{
    float x;
    metka: cout << "x = ";
    cin >> x;
    if (x)
        cout << "y = " << 1 / x << endl;
    else 
    {
        cout << "Функция не определена\n";
        goto metka;
    }
    return 0;
}

