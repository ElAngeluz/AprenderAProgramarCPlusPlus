//#include <iostream>
//
//using namespace std;
//
//void main()
//{
//	int calificacion, aContador = 0, bContador=0,cContador=0, dContador=0,fcontador=0;
//
//	cout << "Introduzca la calificacion con letra." << endl
//		<< "Introduzca el caracter EOF para terminar la entrada de datos." << endl;
//
//	while ((calificacion= cin.get())!=EOF)
//	{
//		switch (calificacion)
//		{
//		case 'A':
//		case 'a':
//			++aContador;
//			break;
//
//		case 'B':
//		case 'b':
//			++bContador;
//			break;
//
//		case 'C':
//		case 'c':
//			++cContador;
//			break;
//
//		case 'D':
//		case 'd':
//			++dContador;
//			break;
//
//		case 'F':
//		case 'f':
//			++fcontador;
//			break;
//
//		case '\n':
//		case '\t':
//		case ' ':
//			break;
//
//		default:
//			cout << "se introdujo una letra incorrecta."
//				<< " introduzca una letra valida." << endl;
//			break;
//		}
//	}
//
//	cout << "\n\nLOs totales de calificaciones por letra son:"
//		<< "\n A: " << aContador
//		<< "\n B: " << bContador
//		<< "\n C: " << cContador
//		<< "\n D: " << dContador
//		<< "\n F: " << fcontador
//		<< endl;
//
//	system("pause");
//}