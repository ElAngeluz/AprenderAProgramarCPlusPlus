//#include <iostream>
//#include <cstdlib>
//#include <iomanip>
//#include <cmath> //permite utilizar funciones matematicas
//
//using namespace std;
//
//void main()
//{
//	double monto, principal = 1000, tasa = 0.5;
//
//	cout << "Year" << setw(21) << "deposit's amount" << endl;
//
//	cout << fixed << setprecision(2); //precision de los numeros flotantes (2 decimales), sin el fixed los valores del monto serian 1.25e+03
//
//	for (int year = 1; year <= 10; year++)
//	{
//		monto = principal * pow(1.0 + tasa, year);
//
//		cout << setw(4) << year << setw(21) << monto << endl;
//	}
//
//	system("pause");
//}