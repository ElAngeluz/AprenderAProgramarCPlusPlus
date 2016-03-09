//#include <iostream>
//
//using namespace std;
//
//int x = 1; //variable global
//
//void usoLocal(void)
//{
//	int x = 25;
//	cout << endl << "la x local es: " << x << " al entrar en usolocal" << endl;
//	++x;
//	cout << endl << "la x local es: " << x << " al salir en usolocal" << endl;
//}
//
//void usoStaticLocal(void)
//{
//	static int x = 50;
//	cout << endl << "la x estatica local es: " << x << " al entrar en usoStaticLocal" << endl;
//	++x;
//	cout << endl << "la x estatica local es: " << x << " al salir en usoStaticLocal" << endl;
//}
//
//void usoGlobal(void)
//{
//	cout << endl << "la x global es: " << x << " al entrar en usoGlobal" << endl;
//	x*=10;
//	cout << endl << "la x global es: " << x << " al salir en usoGlobal" << endl;
//}
//
//void main()
//{
//	int x = 5;
//	cout << "la x local en el alcance externo de main es " << x << endl;
//	{
//		int x = 7;
//		cout << "la x local en el alcance interno de main es " << x << endl;
//	}
//	cout << "la x local en el alcance externo de main es " << x << endl;
//
//	usoLocal();
//	usoStaticLocal();
//	usoGlobal();
//
//	cout << endl << "la x local en main es " << x << endl;
//	system("\npause");
//}