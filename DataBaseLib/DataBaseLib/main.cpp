#include <iostream>
#include <Windows.h>
#include "DBT.h"
using namespace std;

int main()
{
	system("cls");
	cout << "Hello world" << endl;
	DBT myDataBase("Eren","mydatabase");
	myDataBase.begin();
	return 0;
}