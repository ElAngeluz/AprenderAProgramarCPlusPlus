#include <iostream>

using namespace std;

double mayor(double, double, double);

void main()
{
	double Num1, Num2, Num3;

	cout << "introduzca 3 numeros de punto flotante: ";
	cin >> Num1 >> Num2 >> Num3;

	cout << "El mayor entre los tres es: " << mayor(Num1, Num2, Num3) << " " << endl;;

	system("pause");
}

double mayor(double x, double y, double z)
{
	double may = x; //asumo que el mayor es X

	if (y > may)
		may = y;

	if (z > may)
		may = z;

	return may;
}
