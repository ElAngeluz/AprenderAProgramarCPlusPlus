//4.8

#include <iostream>

using namespace std;

void main()
{
	const int tamanoArreglo = 10;
	int a[tamanoArreglo] = { 1,2,3,4,5,6,7,8,9,10 };
	int total = 0;

	for (int i = 0; i < tamanoArreglo; i++)
		total += a[i];

	cout << "el total de los elementos del arreglo es: " << total << endl;

	system("pause");
}