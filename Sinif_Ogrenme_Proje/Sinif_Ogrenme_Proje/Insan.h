#include <iostream>
using namespace std;

class Saat {
	private:
		int saniye;
		int dakika;
		int saat;
	public:
		Saat(int saniye, int dakika, int saat);
		Saat();
		void SetSaat(int s, int d, int san);
		void GetSaat();
};
class Tarih {
	private:
		int gun;
		int ay;
		int yil;
	public:
		Tarih(int gun, int ay, int yil);
		Tarih();
		void SetTarih(int gun, int ay, int yil);
		void GetTarih();
};
class Insan {
	private:
		string ad;
		string soyad;
		int num;
		Tarih dogumTarihi;
		Saat dt_saat;
	public:
		//Olusturma Metotları
		Insan();
		Insan(string ad, string soyad);
		Insan(string ad, string soyad, int num);
		Insan(string ad, string soyad, int num, Tarih tr);
		//Kopyalama Metotdu
		Insan(const Insan & kopya):ad(kopya.ad),soyad(kopya.soyad),num(kopya.num){}
		//Silme Metotdu
		~Insan();
		//(SET)Ayarlama Metotları
		void setAd(string ad);
		void setSoyad(string soyad);
		void setNum(int num);
		void setDogumTarihi(int gun, int ay, int yil);
		void setDogumTarihi(Tarih dt);
		//(GET)Veri Alma Metotları
		string getAd();
		string getSoyad();
		int getNum();
		void getDogumTarihi();
		//Diğer Metotlar
		void Bilgileri_Goster();
};