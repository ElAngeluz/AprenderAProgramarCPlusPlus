//4.12

#include <iostream>

using namespace std;


void main()
{
	char cadena1[20];
	char cadena2[] = "Literal de Cadena";

	cout << "Introduzca la cadena \"Hola Amigos\": ";

	cin >> cadena1; //con el espacio termina la entrada a la cadena

	cout << "la cadena1 es: " << cadena1 <<
		"\nla cadena2 es: " << cadena2 << endl;

	cout << "la cadena con espacio de caracteres es: ";

	for (int i = 0; cadena1[i] != '\0'; i++)
		cout << cadena1[i] << " ";

	cin >> cadena1;

	cout << "\nla cadena1 es: " << cadena1 << endl;

	system("pause");
}