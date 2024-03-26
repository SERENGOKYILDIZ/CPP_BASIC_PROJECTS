#include <iostream>
using namespace std;

int main()
{
	int* sayi = new int;
	*sayi = 13;
	cout << *sayi << endl;
	delete sayi;
	sayi = nullptr;

	int* dizim = new int[10];
	for (int i = 0;i < 10;i++)dizim[i] = i;
	for (int i = 0;i < 10;i++)cout << dizim[i] << endl;
	delete [] dizim;
	dizim = nullptr;

	return 0;
}