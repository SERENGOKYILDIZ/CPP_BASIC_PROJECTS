#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define DEBUG(...) cout << __VA_ARGS__ << endl;
#define TABLE AS
class DBT
{
private:
	string name;
	string filePath;
	int tablesCount;
	int datasCount;
	fstream database;

	string Basic(string name, int tablesCount, int datasCount);
public:
	DBT();
	DBT(string name);
	DBT(string name, string filePath);

	void begin();
};

