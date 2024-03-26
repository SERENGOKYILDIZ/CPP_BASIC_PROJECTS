#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream dosya("DosyaYazma.txt");
	dosya << "Deneme" << endl;
	dosya << "Eren" << endl;

	ofstream dosya2("DosyaEkleme.txt", std::ios_base::app);
	dosya2 << "Deneme" << endl;
	dosya2 << "Eren" << endl;

	ifstream dosya3("DosyaOkuma.txt");
	string yazi;
	
	cout << "Dosya icerigi: " << endl;
	while (dosya3)
	{
		dosya3 >> yazi;
		cout << yazi << endl;
	}
	cout << endl;
	return 0;
}