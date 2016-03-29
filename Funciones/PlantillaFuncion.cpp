//3.27

#include <iostream>

using namespace std;

template <class T>
T maximo(T valor1, T valor2, T valor3)
{
	T max = valor1;

	if (valor2 > max)
		max = valor2;

	if (valor3 > max)
		max = valor3;

	return max;
}

void main()
{
	int entero1, entero2, entero3;

	cout << "Introduzca 3 numeros: ";
	cin >> entero1 >> entero2 >> entero3;
	cout << "\n el valor mayor entero es: " << maximo(entero1, entero2, entero3) << endl;

	char char1, char2, char3;
	cout << "\n introduzca 3 caracteres: ";
	cin >> char1 >> char2 >> char3;
	cout << "\n caracter mayor es: " << maximo(char1, char2, char3) << endl;

	system("\npause");
}