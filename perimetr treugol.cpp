#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x;
    float o;
    float y;

    cout << "Введите чему равен периметр равностароннего треугольника" << endl;
    cin >> x;
    o = x / 3;
    y = (pow(o, 2) * (1 / 2 * 3)) / 4;
    cout << "S=" << y;
}

