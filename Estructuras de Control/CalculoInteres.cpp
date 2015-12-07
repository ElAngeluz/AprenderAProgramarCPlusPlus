//#include <iostream>
//#include <iomanip>
//#include <cmath>
//
//using namespace std;
//
//void main()
//{
//	double monto;
//	double principal=1000;
//	double tasa = .05;
//
//	cout << "Anio" << setw(21) << "Monto del deposito" << endl; //formato de cabecera
//
//	cout << fixed << setprecision(2); //precision de los numeros flotantes (2 decimales), sin el fixed los valores del monto serian 1.25e+03
//
//	for (int i = 1; i <= 10; i++)
//	{
//		monto = principal * pow(1 + tasa, i);
//
//		cout << setw(4) << i << setw(21) << monto << endl;
//	}
//
//	cout << endl;
//	system("pause");
//}