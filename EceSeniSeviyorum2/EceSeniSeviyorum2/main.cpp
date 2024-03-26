#include <iostream>
#include "Insan.h"
using namespace std;

int main()
{
	Insan Ece, Eren;
	Insan Osman("Osman Mert", "Gokyildiz", 19);
	Insan Huseyin("Huso");

	Ece.BilgileriYaz();
	Eren.BilgileriYaz();
	Osman.BilgileriYaz();
	Huseyin.BilgileriYaz();

	return 0;
}