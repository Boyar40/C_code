#include <iostream>
using namespace std;


int main()
{

    int x, y, max;
    cin >> x >> y;
    (x > y) ? cout << x : cout << y << endl; // если x больше y то вывести x если нет вывести y
    max = (x > y) ? x : y; // если x больше y то икс поделить на игрик
    cout << max << endl;
    return 0;
    
}

