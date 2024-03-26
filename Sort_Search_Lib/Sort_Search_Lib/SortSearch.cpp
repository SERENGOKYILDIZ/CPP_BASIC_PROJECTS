#include "SortSearch.h"
void Sort::Bubble_Sort(int array[], int size)
{
	for (int i = 0;i < size;i++)
	{
		for (int j = 1;j < size - i;j++)
		{
			if (array[j-1]>array[j])
			{
				int temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
		}
	}
}
void Sort::Selection_Sort(int array[], int size)
{
	int min_index;
	for (int i = 0;i < size;i++)
	{
		min_index = i;
		for (int j = i;j < size;j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		int temp = array[i];
		array[i] = array[min_index];
		array[min_index] = temp;
	}
}
void Sort::Insertion_Sort(int array[], int size)
{
	int member;
	int before;
	for (int i = 1;i < size;i++)
	{
		member = array[i];
		before = i - 1;
		while (before >= 0 && array[before] > member)
		{
			array[before + 1] = array[before];
			before--;
		}
		array[before + 1] = member;
	}
}
int Search::Linear_Search(int array[], int num, int size)
{
	for (int i = 0;i < size;i++)
	{
		if (array[i] == num)
		{
			return i;
		}
	}
	return -1;
}
int Search::Binary_Search(int array[], int min, int max, int num)
{
	while (min<=max)
	{
		int mid = min + (max - min) / 2;
		if (array[mid] == num)
			return mid;
		if (array[mid] < num)
			min = mid + 1;
		else
			max = mid - 1;
	}
	return -1;
}