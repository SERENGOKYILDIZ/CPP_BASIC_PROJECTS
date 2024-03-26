#include <iostream>
using namespace std;

class Sayi {
private:
	int deger;
public:
	Sayi()
	{
		deger = 0;
	}
	Sayi(int deger)
	{
		this->deger = deger;
	}
	Sayi operator+(Sayi s2)
	{
		Sayi toplam;
		toplam.deger = deger + s2.deger;
		return toplam;
	}
	Sayi operator-(Sayi s2)
	{
		Sayi fark;
		fark.deger = deger - s2.deger;
		return fark;
	}
	Sayi operator*(Sayi s2)
	{
		Sayi çarpim;
		çarpim.deger = deger * s2.deger;
		return çarpim;
	}
	Sayi operator/(Sayi s2)
	{
		Sayi bolum;
		bolum.deger = deger / s2.deger;
		return bolum;
	}
	Sayi operator%(Sayi s2)
	{
		Sayi kalan;
		kalan.deger = deger % s2.deger;
		return kalan;
	}
	Sayi duzenle()
	{
		Sayi deneme;
		deneme.deger = -1;
		return deneme;
	}
	void Goster()
	{
		cout << "Deger: " << this->deger << endl;
	}
};

int main()
{
	Sayi s1(12);
	Sayi s2(13);
	Sayi s3;

	s3 = s1 + s2;
	s1 = s1.duzenle();

	s1.Goster();
	s2.Goster();
	s3.Goster();

	return 0;
}