#include <iostream>
#include "Insan.h"
using namespace std;

int main()
{
	Tarih d1(25, 1, 2002);
	Tarih d2;
	Insan i1("Semi Eren", "Gokyildiz", 155, d1);
	Insan i2("Osman Mert", "Gokyildiz", 684);
	Insan *i3 = new Insan();
	Insan i4;
	Insan i5(i2);

	d2.SetTarih(8, 2, 2004);
	i2.setDogumTarihi(d2);
	i3->setAd("Ahmet");
	i3->setSoyad("Yilmaz");
	i3->setNum(789);
	i4.setAd("Mustafa");

	cout << "Veri cek: " << i1.getAd() << endl;
	cout << "Veri cek: " << i2.getNum() << endl;

	i1.Bilgileri_Goster();
	i2.Bilgileri_Goster();
	i3->Bilgileri_Goster();
	i4.Bilgileri_Goster();
	i5.Bilgileri_Goster();

	cout << "=======================================" << endl << endl << endl;
	delete i3;

	return 0;
}