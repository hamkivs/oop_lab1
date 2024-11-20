#pragma once
ref class ZavdClass
{
	double a, b;
public:
	ZavdClass() { a = 1; b = 1; }
	void Fn_b(double x, double y, double z); 
	void Fn_a(double x, double y, double z);
	double Faktr(int n);
	double geta() { return a; }
	double getb() { return b; }
	
	double SumFields()
	{
		return a + b;
	}
};