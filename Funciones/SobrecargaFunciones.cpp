//3.25

#include <iostream>

using namespace std;

int cuadrado(int x)
{
	cout << "Llama a la funcion con un argumento int: " << x << endl;
	return x*x;
}

double cuadrado(double x)
{
	cout << "Llama a la funcion con un argumento double: " << x << endl;
	return x*x;
}

void main()
{
	cout << "\n El cuadrado del int 7 es: " << cuadrado(7) << endl
		<< "\n El cuadrado del double 7.5 es: " << cuadrado(7.5) << endl;

	system("\npause");
}