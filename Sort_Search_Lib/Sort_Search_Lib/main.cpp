#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "SortSearch.h"
using namespace std;
void GOSTER(int dizi[], int say)
{
	for (int i = 0;i < say;i++)
	{
		cout << i << " indexli eleman = " << dizi[i] << " dir." << endl;
	}
	cout << endl << endl;
}
int main()
{
	srand(time(NULL));
	const int say = 30;
	int sayilar[say];
	for (int i = 0;i < say;i++)
	{
		sayilar[i] = rand() % 100;
	}
	GOSTER(sayilar, say);

	////BUBBLE SORT
	Sort::Bubble_Sort(sayilar, say);
	////SELECTION SORT
	Sort::Selection_Sort(sayilar, say);
	////INSERTION SORT
	Sort::Insertion_Sort(sayilar, say);

	GOSTER(sayilar, say);

	cout << "Hangi sayiyi arayalim : ";
	int ara;
	cin >> ara;
	////LINEAR SEARCH
	cout << ara <<" elemani = " << Search::Linear_Search(sayilar, ara, say) << ".indexli sirada" << endl;

	////BINARY SEARCH
	cout << ara << " elemani = " << Search::Binary_Search(sayilar, 0, say-1, ara) << ".indexli sirada" << endl;
	return 0;
}