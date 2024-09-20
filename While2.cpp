#include <iostream>
using namespace std;
int main() 
{
	int n, i = 1;
	cout << "n = ";
	cin >> n;
	while (i<= n)// пока i меньше или равно п
	{
		cout << i << "\t"; // выводим на экран значение i
		++i;              // увеличиваем i на единицу
	}
	return 0;
}
