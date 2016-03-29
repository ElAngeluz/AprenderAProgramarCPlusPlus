#include <iostream>
#include <cstdlib>

using namespace std;

void main()
{
	int Valor;

	Valor = 4;

	cout << Valor << endl;
	cout << Valor++ << endl; //presenta y luego incrementa
	cout << Valor << endl << endl;

	Valor = 4;

	cout << Valor << endl;
	cout << ++Valor << endl; //incrementa y luego presenta
	cout << Valor << endl;

	system("pause");
}