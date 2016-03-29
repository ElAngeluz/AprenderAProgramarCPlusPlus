#include <iostream>

using namespace std;

int Cuadrado(int);

void main()
{
	for (int i = 1; i <= 10; i++)
		cout << Cuadrado(i) << " ";

	cout << endl;

	system("pause");
}

int Cuadrado(int y)
{
	return y*y;
}
