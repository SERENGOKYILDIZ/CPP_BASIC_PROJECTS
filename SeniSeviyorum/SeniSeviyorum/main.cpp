/*
#include <iostream>
using namespace std;

inline int kup(int s1)
{
	return s1 * s1 * s1;
}
void degiskenRef(int& s1)
{
	s1++;
}
void EkranaYazDeger(string yazi = "Yazi yok")
{
	cout << yazi << endl;
}
int main()
{
	int sonuc;
	int& referens = sonuc;
	int* pointer;

	pointer = &sonuc;
	sonuc = kup(2);
	degiskenRef(sonuc);
	referens++;

	cout << "Sonuc = " << sonuc << endl;
	cout << "Sonuc = " << referens << endl;
	cout << "Sonuc = " << *pointer << endl;

	EkranaYazDeger("Seni cok seviyorum Ece");
	return 0;
}
*/

/*
#include <iostream>
using namespace std;

template <class Tur1,class Tur2>
Tur1 toplam(Tur1 s1, Tur2 s2)
{
	return s1 + s2;
}
int main()
{
	double toplamSayi = toplam(2.123, 4);
	cout << toplamSayi << endl;
	return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> anoni(3);
	vector <int> seninAnoni;
	vector <string> AnoninIsimleri;

	anoni[0] = 31;
	anoni[1] = 31;
	anoni[2] = 31;

	anoni.push_back(32);
	anoni.push_back(3131);
	anoni.push_back(989);

	seninAnoni = anoni;

	for (int i = 0;i < anoni.size();i++)
	{
		cout << i + 1 << " inci eleman = " << anoni[i] << endl;
	}
	for (int i = 0;i < seninAnoni.size();i++)
	{
		cout << i + 1 << " inci eleman = " << seninAnoni[i] << endl;
	}
	return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

class Ogrenci {
public:
	string ad;
	string soyad;
	int yasi;
	void IsimYaz()
	{
		cout << ad << endl;
		cout << soyad << endl;
		cout << yasi << endl;
	}
	void IsimYaz2(string ad, string soyad)
	{
		cout << this->ad << endl;
		cout << this->soyad << endl;
		cout << ad << endl;
		cout << soyad << endl;
	}
};
int main()
{
	Ogrenci senin;
	senin.ad = "Ece";
	senin.soyad = "Hekim";
	senin.yasi = 20;

	cout << "Bir yazi giriniz: " << endl;
	getline(cin, senin.ad);///--> String bir ifadeyi okur

	senin.IsimYaz();
	cout << endl;
	senin.IsimYaz2("Eren","Semi");
	cout << endl;
	cout << endl;
	cout << endl;

	
	return 0;
}
