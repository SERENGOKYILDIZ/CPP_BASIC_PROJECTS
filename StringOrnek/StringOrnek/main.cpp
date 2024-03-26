#include <iostream>
#include <string>
using namespace std;

int main()
{
	string isim1 = "Eren";
	string isim2 = "Osman";
	string isim3;
	string girdi;
	string yazi = "Seni cok seviyorum Osman";

	cout << "isim1: " << isim1 << endl;
	cout << "isim2: " << isim2 << endl;
	cout << "isim3: " << isim3 << endl;
	cout << "girdi: " << girdi << endl;
	cout << "yazi: " << yazi << endl;

	cout << "Metin yaziniz : ";
	getline(cin, girdi);
	cout << "Metin: " << girdi << endl;

	cout << "isim1 uzunluk = " << isim1.length() << endl;

	isim3.assign(isim2);
	cout << "isim3'e isim2'i atadik. isim3 = " << isim3 << " oldu." << endl;

	cout << "isim1'in 3.indexli harfi : " << isim1.at(3) << " tur." << endl;

	cout << "Yazinin 5.indexli karakterinden itibaren 8 karakter yaz : " << yazi.substr(5, 8) << endl;

	isim1.swap(isim2);
	cout << "isim1 ile isim2 degistirildi!" << endl;
	cout << "isim1: " << isim1 << endl;
	cout << "isim2: " << isim2 << endl;

	yazi.erase(6);
	cout << "Yazinin ilk 6 karakter sonrasini sildik : " << yazi << endl;
	yazi.erase(3,2);
	cout << "Yazinin ilk 3 ten sonra 2 karakterini sildik : " << yazi << endl;

	yazi = "BEN SENI COK SEVMEK OSMAN";
	cout << "yeniden atama. yazi: " << yazi << endl;

	cout << "SE 'nin bulunmus indexi = " << yazi.find("SE") << endl;
	cout << "Sagdan SE 'nin bulunmus indexi = " << yazi.rfind("SE") << endl;

	string ekleme = "Eren ile Osman";
	yazi.replace(4, 8, ekleme);
	cout << "\"Eren ile Osman\" yazisi yerlestirildi yaziya: " << yazi << endl;






	cout << endl << endl;
	return 0;
}