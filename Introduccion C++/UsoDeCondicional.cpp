#include <conio.h>
#include <iostream>

#pragma warning (disable:4996) //usado para que el Getch() no de problemas en tiempo de ejecucion 

using namespace std;

int main()
{
	int num1;
	int num2;

	cout << "Digite dos numeros enteros, y te puedo decir\n"
		<< "las relaciones que satisfacen para estos: ";
	cin >> num1 >> num2;

	if (num1 == num2)
		cout << num1 << " es igual que " << num2 << endl;

	if (num1 != num2)
		cout << num1 << " no es igual que " << num2 << endl;

	if (num1 < num2)
		cout << num1 << " es menor que " << num2 << endl;

	if (num1 > num2)
	{
		cout << num1 << " es mayor que " << num2 << endl;
	}

	if (num1 <= num2)
	{
		cout << num1 << " es menor o igual que " << num2 << endl;
	}

	if (num1 >= num2)
	{
		cout << num1 << " es mayor o igual que " << num2 << endl;
	}
	getch();
	return 0;
}
