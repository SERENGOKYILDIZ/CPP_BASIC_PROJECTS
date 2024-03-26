#include <iostream>
#include <fstream>
using namespace std;
namespace Veri 
{
	string dosyaAdi="DENEME.txt";
	template <class v>
	void DosyaOku(v& deger)
	{
		ifstream dosyaRead(dosyaAdi);
		dosyaRead >> deger;
	}
	template <class v>
	void DosyaYaz(v& deger)
	{
		ofstream dosyaWrite(dosyaAdi);
		dosyaWrite << deger;
	}
	template <class v>
	void DosyaGuncelle(v& deger)
	{
		ofstream dosyaUpdate(dosyaAdi, std::ios_base::app);
		dosyaUpdate << deger;
	}
	void VeriOku(int i)
	{
		string ad, soyad;
		int no=0;
		ifstream dosyaRead(dosyaAdi);
		do {
			dosyaRead >> ad >> soyad >> no;
		} while (i--);
		cout << "Ad:    " << ad << endl;
		cout << "Soyad: " << soyad << endl;
		cout << "No:    " << no << endl;
		cout << endl << endl;
	}
}
int main()
{
	using namespace Veri;
	VeriOku(5);
	VeriOku(1);
	VeriOku(3);
	return 0;
}