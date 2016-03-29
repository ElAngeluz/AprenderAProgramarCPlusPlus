#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int tirarDados(void)
{
	int dado1, dado2, sumaTrabajo;

	dado1 = 1 + rand() % 6;
	dado2 = 1 + rand() % 6;
	sumaTrabajo = dado1 + dado2;

	cout << "El jugador tiro " << dado1 << " + " << dado2 << " = " << sumaTrabajo << endl;

	return sumaTrabajo;
}

void main()
{
	enum Status
	{
		CONTINUA,
		GANA,
		PIERDE
	};

	int suma, miPunto;

	Status estadoJuego;

	srand(time(0));

	suma = tirarDados();

	switch (suma)
	{
	case 7:
	case 11:
		estadoJuego = GANA;
		break;

	case 3:
	case 2:
	case 12:
		estadoJuego = PIERDE;
		break;
				
	default:
		estadoJuego = CONTINUA;
		miPunto = suma;
		cout << "La puntuacion es " << miPunto << endl;
		break;
	}

	while (estadoJuego == CONTINUA)
	{
		suma = tirarDados();

		if (suma == miPunto)
			estadoJuego = GANA;
		else
			if (suma == 7)
				estadoJuego = PIERDE;
	}

	if (estadoJuego = GANA)
		cout << "El jugador gana";
	else
		cout << "El jugador pierde";

	system("\npause");
}