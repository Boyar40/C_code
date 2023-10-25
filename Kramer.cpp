#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int a1;
	int b1;
	int c1;
	int a2;
	int b2;
	int c2;
	int str1;
	int str2;
	int str3;
	int r;
	int g;
	int gg;
	int rr;
	cout << "Введите три числа для первой строки" << endl;
	cin >> a >> b >> c;
	cout << "Введите три числа для второй строки" << endl;
	cin >> a1 >> b1 >> c1;
	cout << "Введите три числа для третей строки" << endl;
	cin >> a2 >> b2 >> c2;

	cout << a  << "|" << b  << "|" << c  << "|" << endl;
	cout << a1 << "|" << b1 << "|" << c1 << "|" << endl;
	cout << a2 << "|" << b2 << "|" << c2 << "|" << endl;

	r = (c2 * b1 * a) + (b2 * a1 * c) + (a2 * c1 * b) - (a2 * b1 * c) - (a1 * b * c2) - (a * b2 * c1);
	cout << "Главный определитель равен\t" << r << endl;

	cout << "Введите чему равна первая строка" << endl;
	cin >> str1;
	cout << "Введите чему равна вторая строка" << endl;
	cin >> str2;
	cout << "Введите чему равна третья строка" << endl;
	cin >> str3;

	cout << str1 << "|" << b  << "|" << c  << "|" << endl;
	cout << str2 << "|" << b1 << "|" << c1 << "|" << endl;
	cout << str2 << "|" << b2 << "|" << c2 << "|" << endl;

	g = (c2 * b1 * str1) + (b2 * str2 * c) + (str3 * c1 * b) - (str3 * b1 * c) - (str2 * b * c2) - (str1 * b2 * c1);
	cout << "Дельта x равен\t" << g << endl;

	cout << a  << "|" <<str1<< "|"  << c  << "|" << endl;
	cout << a1 << "|" <<str2 << "|" << c1 << "|" << endl;
	cout << a2 << "|" <<str3 << "|" << c2 << "|" << endl;

	gg = (c2 * str2 * a) + (str3 * a1 * c) + (a2 * c1 * str1) - (a2 * str2 * c) - (a1 * str1 * c2) - (a * str3 * c1);
	cout << "Дельта y равен\t" << gg << endl;

	cout << a << "|" << b << "|" << str1 << "|" << endl;
	cout << a1 << "|" << b1 << "|" << str2 << "|" << endl;
	cout << a2 << "|" << b2 << "|" << str3 << "|" << endl;

	rr = (str3 * b1 * a) + (b2 * a1 * str1) + (a2 * str2 * b) - (a2 * b1 * str1) - (a1 * b * str3) - (a * b2 * str2);
	cout << "Дельта z равен\t" << rr << endl;

	cout << "x=" << g / r << "y=" << gg / r << "z=" << rr / r << endl;

	return 0;
}

