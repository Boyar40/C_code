#include <iostream>
using namespace std;

int a = 100, b = 20; // глобальные переменные а и b

void fi(int a) // локальная переменная a
{
	a += 10; // 1
	cout << "f1:\t" << a << "\t" << ::a << endl; // 2
}

void f2 (int b) // локальная переменная b
{
	b *= 2;
	cout << "f2\t" << b << "\t" << a << endl; // 4
}

int main()
{
	cout << "main:\t" << a << "\t" << b << endl; // 5
	fi(a); f2(b); // 6
	cout << "main:\t" << a << "\t" << b << endl; // 7
	return 0;
}