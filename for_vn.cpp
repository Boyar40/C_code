﻿#include <iostream>
using namespace std;
int main() 
{
	int n;
	cout << "n = ";
		cin >> n;
	for (int i = 1; i <= n; i++) // для i от 1 до п с шагом 1
		cout << i << "\t"; // выводить на экран значение i
	return 0;

}

