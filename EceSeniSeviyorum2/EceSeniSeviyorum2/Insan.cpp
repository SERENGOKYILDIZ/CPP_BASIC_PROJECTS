#include "Insan.h"

Insan::Insan()
{
	this->ad = "Adsiz";
	this->soyad = "Soyadsiz";
	this->yas = 31;

	cout << "Bos bir Insan olustu!!!!" << endl;
}
Insan::Insan(string ad, string soyad, int yas)
{
	this->ad = ad;
	this->soyad = soyad;
	this->yas = yas;

	cout << "Adi: " << this->ad << "  olan bir Insan olustu!!!!" << endl;
}
void Insan::Isimlendir(string ad, string soyad)
{
	string eskiAd, eskiSoyad;

	eskiAd = this->ad;
	eskiSoyad = this->soyad;

	this->ad = ad;
	this->soyad = soyad;

	cout << "Adi: " << eskiAd << " " << eskiSoyad << "   olan isim yerini " << ad << " " << soyad << "  olarak degistirildi." << endl;
}
void Insan::setYas(int yas)
{
	int eskiYas;

	eskiYas = this->yas;

	this->yas = yas;

	cout << "Yasi: " << eskiYas << "   olan yasin yerini " << yas << "  olarak degistirildi." << endl;
}
void Insan::BilgileriYaz()
{
	cout << "====================" << endl;
	cout << "Ad:     " << ad << endl;
	cout << "Soyad:  " << soyad << endl;
	cout << "Yas:    " << yas << endl;
	cout << "====================" << endl;
}