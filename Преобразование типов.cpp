#include <iostream>
using namespace std;
int main()
{
	int a = 100, b;
	float с = 4.5, d;

	d =  a/с; // 1 - без потери точности
	cout << "d = " << d << endl;

	b = a/с; // 2 - с потерей точности
	cout << "b = " << b << endl;

	return 0;
}
