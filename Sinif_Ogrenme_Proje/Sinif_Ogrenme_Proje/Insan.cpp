#include "Insan.h"

Saat::Saat(int saniye, int dakika, int saat)
{
	this->saniye = saniye;
	this->dakika = dakika;
	this->saat = saat;
}
Saat::Saat()
{
	this->saniye = 0;
	this->dakika = 0;
	this->saat = 0;
}
void Saat::SetSaat(int s, int d, int san)
{
	this->saniye = san;
	this->dakika = d;
	this->saat = s;
}
void Saat::GetSaat()
{
	cout << Saat::saat << "/" << Saat::dakika << "/" << Saat::saniye;
}
Tarih::Tarih(int gun, int ay, int yil)
{
	this->gun = gun;
	this->ay = ay;
	this->yil = yil;
}
Tarih::Tarih()
{
	this->gun = 0;
	this->ay = 0;
	this->yil = 0;
}
void Tarih::SetTarih(int gun, int ay, int yil)
{
	this->gun = gun;
	this->ay = ay;
	this->yil = yil;
}
void Tarih::GetTarih()
{
	cout << Tarih::gun << "/" << Tarih::ay << "/" << Tarih::yil;
}
Insan::Insan()
{
	this->ad = " ";
	this->soyad = " ";
	this->num = 0;
	cout << "Bos bir insan olusturuldu." << endl;
}
Insan::Insan(string ad, string soyad)
{
	this->ad = ad;
	this->soyad = soyad;
	this->num = 0;
	cout << "Adi ve soyadi olan bir insan olusturuldu." << endl;
}
Insan::Insan(string ad, string soyad, int num)
{
	this->ad = ad;
	this->soyad = soyad;
	this->num = num;
	cout << "Adi, soyadi ve numarasi olan bir insan olusturuldu." << endl;
}
Insan::Insan(string ad, string soyad, int num, Tarih tr)
{
	this->ad = ad;
	this->soyad = soyad;
	this->num = num;
	this->dogumTarihi = tr;
	cout << "Adi, soyadi, numarasi ve dogum tarihi olan bir insan olusturuldu." << endl;
}
Insan::~Insan()
{
	cout << this->ad << " " << this->soyad << " isimli insan basariyla silinmistir." << endl;
}
void Insan::setAd(string ad)
{
	this->ad = ad;
}
void Insan::setSoyad(string soyad)
{
	this->soyad = soyad;
}
void Insan::setNum(int num)
{
	if(num>0)this->num = num;
}
void Insan::setDogumTarihi(int gun, int ay, int yil)
{
	this->dogumTarihi.SetTarih(gun, ay, yil);
}
void Insan::setDogumTarihi(Tarih dt)
{
	this->dogumTarihi = dt;
}
string Insan::getAd()
{
	return this->ad;
}
string Insan::getSoyad()
{
	return this->soyad;
}
int Insan::getNum()
{
	return this->num;
}
void Insan::getDogumTarihi()
{
	this->dogumTarihi.GetTarih();
}
void Insan::Bilgileri_Goster()
{
	cout << "-----------------------------------" << endl;
	cout << "AD:             " << Insan::ad << endl;
	cout << "SOYAD:          " << Insan::soyad << endl;
	cout << "NUMARA:         " << Insan::num << endl;
	cout << "DOGUM TARIHI:   ";
	Insan::dogumTarihi.GetTarih();
	cout << endl;
	cout << "-----------------------------------" << endl;
}