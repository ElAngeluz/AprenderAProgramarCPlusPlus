//#include <iostream>
//#include <cstdlib>
//#include <iomanip> //encabezado para la funcion setprecision 
//
//using namespace std;
//
//void main()
//{
//	int Total, ContadorCalificacion, Calificacion;
//	double Promedio;
//	const int CantidadCalificaicones = 10;
//
//	Total = 0; ContadorCalificacion = 0;
//
//	cout << "Introduzca una Calificacion, si ingresa -1 finalizara: ";
//	cin >> Calificacion;
//
//	while (Calificacion!=-1)
//	{
//		Total += Calificacion; // total = total + calificacion 
//		ContadorCalificacion += 1;
//
//		cout << "Introduzca una Calificacion, si ingresa -1 finalizara: ";
//		cin >> Calificacion;
//	}
//
//	if (ContadorCalificacion !=0)
//	{
//		//calcula el promedio de las calificaciones ingresadas.
//		Promedio = static_cast<double>(Total) / ContadorCalificacion; 
//
//		//promedia con dos digitos de precision
//		cout << "El Promedio de la clase es de: " << setprecision(2) << fixed << Promedio << endl << endl;
//	}
//
//	system("pause");
//}