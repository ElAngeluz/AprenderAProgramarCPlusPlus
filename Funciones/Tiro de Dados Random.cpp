#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void main()
{
	unsigned semilla;
	
	cout << "Ingrese semilla: ";
	cin >> semilla;
	srand(semilla);

	for (int Contador = 1; Contador <= 10; Contador++)
	{
		cout << setw(10) << (1 + rand() % 6);

		if (Contador % 5 == 0)
			cout << endl;	
	}

	system("pause");
}