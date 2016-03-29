#include <iostream>

using namespace std;

void main()
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 5)
			break;

		cout << x << " ";
	}

	cout << "\n Interrupcion del ciclo cuando x se volvio " << x << endl;

	system("pause");
	
}