//4.10

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void main()
{
	const int tamanoArreglo = 7;
	int frecuencia[tamanoArreglo] = { 0 };
	srand(time(0));

	for (int tiro = 0; tiro < 6000; tiro++)
		++frecuencia[1 + rand() % 6];

	cout << "cara" << setw(13) << "Frecuencia" << endl;

	for (int i = 0; i < tamanoArreglo; i++)
		cout << setw(4) << i << setw(13) << frecuencia[i] << endl;

	system("\npause");
}