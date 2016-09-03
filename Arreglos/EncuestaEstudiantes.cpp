//4.11

#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	const int tamanoRespuesta = 6;
	const int tamanoFrecuecnia = 11;

	int respuestas[tamanoRespuesta] = { 1,2,6,4,8,5 };

	int frecuencia[tamanoFrecuecnia] = { 0 };

	for (int respuesta = 0; respuesta < tamanoRespuesta; respuesta++)
		++frecuencia[respuestas[respuesta]];

	cout << "calificacion " << setw(17) << "Frecuencia" << endl;

	for (int calificacion = 0; calificacion < tamanoFrecuecnia; calificacion++)
		cout << setw(6) << calificacion << setw(17) << frecuencia[calificacion] << endl;

	system("pause");
}