#include <iostream>
using namespace std;

void sayilari_degistir(int&, int& s2, int a = 4);

void sayilari_degistir(int& s1, int& s2, int a)
{
	s1++;
	s2--;
	cout << "a: " << a << endl;
}
int main()
{
	int sayi1 = 54;
	int sayi2 = 45;

	cout << "Sayi 1: " << sayi1 << "   Sayi 2: " << sayi2 << endl;
	sayilari_degistir(sayi1, sayi2);
	cout << "Sayi 1: " << sayi1 << "   Sayi 2: " << sayi2 << endl;
	return 0;
}