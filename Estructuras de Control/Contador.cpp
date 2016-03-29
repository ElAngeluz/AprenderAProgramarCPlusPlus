#include <iostream>
#include <cstdlib>

using namespace std;

void main()
{
	int aprobados = 0, reprobados = 0, contadorEstudiantes = 1, resultados, NumeroEstudiantes=10;

	while (contadorEstudiantes <= NumeroEstudiantes)
	{
		cout << " Introduzca Resultado (1 para aprobado, 2 para reprobado): ";
		cin >> resultados;

		if (resultados == 1)
			aprobados += 1; //contador
		else
			reprobados += 1;

		contadorEstudiantes += 1;
	}

	cout << "\nEl numero de Aprobados es: "<< aprobados << endl;
	cout << "El numero de Reprobados es: "<< reprobados << endl;

	system("pause");
}