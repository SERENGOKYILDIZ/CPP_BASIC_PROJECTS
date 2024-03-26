#include <iostream>
using namespace std;
/*
	get --> almak
	set --> kurmak
*/
class Insan {
private:
	string ad;
	string soyad;
	int yas;
public:
	Insan(); // Herhangi bir "Insan" oluşunca bu metot çalışır.
	Insan(string ad, string soyad, int yas);

	explicit Insan(string isim) : ad(isim){} /* explicit anahtar sözcüğü,
	gelen "isim" bilgisini otomatik olarak düzelterek "ad" değişkenine aktarır.*/

	void Isimlendir(string ad, string soyad);
	void setYas(int yas);
	void BilgileriYaz(); // Bu bilgileri konsola yazar.
};