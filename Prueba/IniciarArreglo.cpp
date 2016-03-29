//4.1

#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	int n[10];

	for (int i = 0; i < 10; i++)	
		n[i] = 0;
	
	cout << "Elemento" << setw(13) << "valor" << endl;

	for (int i = 0; i < 10; i++)
		cout << setw(7) << i+1 << setw(13) << n[i] << endl;

	system("pause");
}