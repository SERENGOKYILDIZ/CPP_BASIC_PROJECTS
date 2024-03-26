#include <iostream>
using namespace std;

template<class v, class u>
v toplam(v s1, v s2)
{
	return s1 + s2;
}
namespace math
{
	float PI = 3.14;

	int toplama(int a, int b)
	{
		return a + b;
	}
	int fark(int a, int b)
	{
		return a - b;
	}
	int carp(int a, int b)
	{
		return a * b;
	}
	int bol(int a, int b)
	{
		return a / b;
	}
}
//using namespace math;
int main()
{
	/*
	* cout << PI << endl;
	cout << toplama(3, 4) << endl;
	cout << fark(3, 4) << endl;
	cout << carp(3, 4) << endl;
	cout << bol(12, 4) << endl;
	*/
	cout << math::PI << endl;
	cout << math::toplama(3, 4) << endl;
	cout << math::fark(3, 4) << endl;
	cout << math::carp(3, 4) << endl;
	cout << math::bol(12, 4) << endl;

	int a = 5;
	int b = 24;
	{
		int a = 132;
		cout << "DENEME TOPLAM: " << a + b << endl;
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
	}

	cout << "TEMPLATE TOPLAMA: " << toplam<int,int>(12, 2) << endl;
	cout << "TEMPLATE TOPLAMA: " << toplam<float,float>(12.5, 7.8) << endl;
	cout << "TEMPLATE TOPLAMA: " << toplam<int,float>(12, 5.6) << endl;

	cout << "Bir sayi giriniz:  ";
	int girdi;
	cin >> girdi;
	try
	{
		if (girdi < 0)
			throw 404;
	}
	catch (int hata)
	{
		if (hata == 404)
			cout << "<0 girdiniz.";
	}
	return 0;
}