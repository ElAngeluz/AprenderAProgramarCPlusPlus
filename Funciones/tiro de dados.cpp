//3.8

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void main()
{
	int Frecuencia1 = 0, Frecuencia2 = 0, 
		Frecuencia3 = 0, Frecuencia4 = 0, 
		Frecuencia5 = 0, Frecuencia6 = 0, 
		cara;

	for (int tiro = 0; tiro < 6000; tiro++)
	{
		cara = 1 + rand() % 6;

		//determina el valor de la cara para incrementar su valor
		switch (cara)
		{

		case 1:
			++Frecuencia1;
			break;

		case 2:
			++Frecuencia2;
			break;

		case 3:
			++Frecuencia3;
			break;

		case 4:
			++Frecuencia4;
			break;

		case 5:
			++Frecuencia5;
			break;

		case 6:
			++Frecuencia6;
			break;

		default:
			cout << "el programa nunca debe llegar hasta aqui" <<endl;
			break;
		}
	}

	//desplliega el resultado

	cout << "cara" << setw(13) << "Frecuencia"
		<< "\n   1" << setw(13) << Frecuencia1
		<< "\n   2" << setw(13) << Frecuencia2
		<< "\n   3" << setw(13) << Frecuencia3
		<< "\n   4" << setw(13) << Frecuencia4
		<< "\n   5" << setw(13) << Frecuencia5
		<< "\n   6" << setw(13) << Frecuencia6 << endl;

	system("pause");
}