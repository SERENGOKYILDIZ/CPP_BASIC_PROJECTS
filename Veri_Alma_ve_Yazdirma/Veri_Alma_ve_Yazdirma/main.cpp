#include <iostream>
using namespace std;

int main()
{
	int tamsayi;
	float ondalik;
	char karakter;
	bool anahtar;

	cout << "Lutfen bir tam sayi, bir ondalikli sayi, bir karakter ve bir anahtar verisi giriniz." << endl;
	cin >> tamsayi;
	cin >> ondalik;
	cin >> karakter;
	cin >> anahtar;
	cout << "Girilen degerler:" << endl 
		<< "Tam sayi: " << tamsayi << endl 
		<< "Ondalikli sayi: " << ondalik << endl 
		<< "Karakter: " << karakter << endl 
		<< "Anahtar: " << anahtar << endl;
	return 0;
}