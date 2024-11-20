#include "pch.h"
#include "ZavdClass.h"
#include "Math.h"
using namespace std;
// Обчислення функції b[x,y,z]
void ZavdClass::Fn_b(double x, double y, double z)
{
	double b1 = 1 - (x + y) / (pow(fabs(z), 0.34));
	double b2 = (pow(y,2) / Faktr(3)) + (pow(z, 3) / Faktr(5));
	double b3 = exp(x - y) / (z + y);
	b = b1 + b2 + b3;
}
// Обчислення функції a[x,y,z,b]
void ZavdClass::Fn_a(double x, double y, double z)
{
	double a1 = (y - (sqrt(fabs(pow(x, 2) - b))));
	double a2 = (y - pow(x, 2)) / (z + 4 * pow(y, 2));
	a = pow(log(fabs(a1 * a2)), 2 / 3);
}
// Обчислення факторіалу
double ZavdClass::Faktr(int n)
{
	double f = 1;
	if (n > 1)
		for (int i = 2; i <= n; i++)
			f *= i;
	return f;
}
