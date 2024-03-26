#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Insan {
private:
	string ad;
	string soyad;
	int yas;
	string islem;
public:
	Insan()
	{
		ad = "Isimsiz";
		soyad = "Isimsiz";
		yas = 0;
		islem = "Islem yok..";
	}
	Insan(string islem)
	{
		ad = "Varlikli";
		soyad = islem + " yapan eleman";
		yas = 0;
		this->islem = islem;
	}
	~Insan()
	{
		cout << ad << " " << soyad << "  isimli islem basariyla silinmistir..." << endl;
	}
	void setAd(string ad)
	{
		this->ad = ad;
	}
	void setSoyad(string soyad)
	{
		this->soyad = soyad;
	}
	void setYas(int yas)
	{
		if (yas >= 0) this->yas = yas;
		else cout << "Yas 0'dan kucuk olamaz!!!" << endl;
	}
	void setIslem(string islem)
	{
		this->islem = islem;
	}
	string getAd()
	{
		return ad;
	}
	string getSoyad()
	{
		return soyad;
	}
	int getYas()
	{
		return yas;
	}
	string getIslem()
	{
		return islem;
	}
	void Bilgileri_Goster()
	{
		cout << endl << "----------------------------------" << endl;
		cout << "Ad:     " << ad << endl;
		cout << "Soyad:  " << soyad << endl;
		cout << "Yas:    " << yas << endl;
		cout << "Islem:  " << islem << endl;
		cout << "----------------------------------" << endl << endl << endl;
	}
};
int main()
{
	stack<Insan> insanlar;
	queue<Insan> insanlar_kuyruk;
	//stackteki Insanları en üsten alıp yaşlarını +1 yapıp geri koy.
	cout << "Yigit deneyi" << endl;
	insanlar.push(Insan("temizlik"));
	insanlar.push(Insan("sayim"));
	insanlar.push(Insan("yok"));
	insanlar.push(Insan("bakmak"));
	insanlar.push(Insan("oturmak"));
	insanlar.push(Insan("izlemek"));
	insanlar.push(Insan("beklemek"));
	insanlar.push(Insan("yazmak"));

	insanlar_kuyruk.push(Insan("temizlik"));
	insanlar_kuyruk.push(Insan("sayim"));
	insanlar_kuyruk.push(Insan("yok"));
	insanlar_kuyruk.push(Insan("bakmak"));
	insanlar_kuyruk.push(Insan("oturmak"));
	insanlar_kuyruk.push(Insan("izlemek"));
	insanlar_kuyruk.push(Insan("beklemek"));
	insanlar_kuyruk.push(Insan("yazmak"));

	while (insanlar.size() > 0)
	{
		Insan &i = insanlar.top();
		i.setYas(1);
		i.Bilgileri_Goster();
		insanlar.pop();
	}
	cout << "Kuyruk deneyi" << endl;
	insanlar_kuyruk.front().Bilgileri_Goster();
	insanlar_kuyruk.back().Bilgileri_Goster();
	return 0;
}