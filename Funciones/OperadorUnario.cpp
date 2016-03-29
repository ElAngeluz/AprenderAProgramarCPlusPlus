//3.24

#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265358979;

void main()
{
	const float PI = static_cast<float>(::PI);

	cout << setprecision(20) << "Valor local de PI (Float) = " << PI <<endl<<
		"Valor global de PI (Double) = " << ::PI << endl;

	system("\npause");
}