#include <iostream>
#include <cstdlib>

using namespace std;

void main()
{
	int Total, ContadorCalificacion, Calificacion, Promedio;
	const int CantidadCalificaicones = 10; 

	Total = 0; ContadorCalificacion = 1;

	while (ContadorCalificacion<= CantidadCalificaicones)
	{
		cout << "Introduzca la Calificacion " << ContadorCalificacion<< " :";
		cin >> Calificacion;

		Total += Calificacion; // total = total + calificacion 

		ContadorCalificacion += 1;
	}

	Promedio = Total / CantidadCalificaicones;

	cout << "El Promedio de la clase es de: " << Promedio << endl << endl;

	system("pause");
}