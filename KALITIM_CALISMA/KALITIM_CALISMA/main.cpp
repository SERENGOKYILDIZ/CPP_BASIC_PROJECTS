#include <iostream>
using namespace std;

class Hayvan {
private:
	string ad;
	string ses = "Ses yok";
	int yas;
protected:
	string tur;
public:
	Hayvan();
	Hayvan(string ad);
	void setAd(string ad);
	void setYas(int yas);
	string getAd();
	int getYas();
};
class Kedi:public Hayvan {
private:
	int patiSayisi;
public:
	Kedi();
	void setPati(int say);
	void setTur(string tur);
	int getPati();
	string getTur();
};
Hayvan::Hayvan()
{
	this->ad = "Isimsiz";
	this->yas = 0;
	cout << "Bos bir hayvan olusturuldu !" << endl;
}
Hayvan::Hayvan(string ad)
{
	this->ad = ad;
	cout << ad << " -> adinda bir hayvan olusturuldu !" << endl;
}
void Hayvan::setAd(string ad)
{
	string eski_ad = this->ad;
	this->ad = ad;
	cout << "\"" << eski_ad << "\" isimli hayvanin yeni adi " << "\"" << ad << "\" oldu !" << endl;
}
void Hayvan::setYas(int yas)
{
	int eski_yas = this->yas;
	if(yas>0) this->yas = yas;
	if (yas > 0) cout << eski_yas << " yasindaki hayvanin yeni yasi " << yas << " oldu !" << endl;
	else cout << "HATA:Girilen yas negatiftir !!" << endl;
}
string Hayvan::getAd()
{
	return this->ad;
}
int Hayvan::getYas()
{
	return this->yas;
}
Kedi::Kedi()
{
	this->patiSayisi = 0;
	cout << "Bos bir kedi olusturuldu !" << endl;
}
void Kedi::setPati(int say)
{
	this->patiSayisi = say;
}
void Kedi::setTur(string tur)
{
	this->tur = tur;
}
int Kedi::getPati()
{
	return this->patiSayisi;
}
string Kedi::getTur()
{
	return this->tur;
}
int main()
{
	Hayvan h1;
	Kedi k1;

	cout << endl << endl;
	h1.setAd("BEBE");
	h1.setYas(12);
	h1.setAd("PAMUK");
	h1.setYas(11);

	cout << endl << endl;
	cout << "Isim cekme : " << h1.getAd() << endl;
	cout << "Yas cekme : " << h1.getYas() << endl;

	cout << endl << endl;
	k1.setAd("Kedi");
	k1.setTur("Sokak");
	k1.setYas(12);
	k1.setPati(4);

	Hayvan* h_ptr;
	h_ptr = &k1;
	h_ptr->setYas(45);
	k1.setYas(-12);

	cout << endl << endl;
	cout << "Isim cekme : " << k1.getAd() << endl;
	cout << "Tur cekme : " << k1.getTur() << endl;
	cout << "Yas cekme : " << k1.getYas() << endl;
	cout << "Pati cekme : " << k1.getPati() << endl;





	cout << endl << endl << endl << endl << "-----------------------------------------";
	return 0;
}