#include "DBT.h"

string DBT::Basic(string name, int tablesCount, int datasCount)
{
	string data = name;
	data += " ";
	data += to_string(tablesCount);
	data += " ";
	data += to_string(datasCount);
	data += "\n";
	return data;
}
DBT::DBT()
{
	name="NULL";
	filePath="db.txt";
	tablesCount=0;
	datasCount=0;
}
DBT::DBT(string name)
{
	this->name = name;
	filePath = "db.txt";
	tablesCount = 0;
	datasCount = 0;
}
DBT::DBT(string name, string filePath)
{
	this->name = name;
	if(filePath.find(".txt")<100) this->filePath = filePath;
	else this->filePath = filePath+".txt";
	tablesCount = 0;
	datasCount = 0;
}
void DBT::begin()
{
	database.open(filePath,ios::in);
	if (database.is_open())
	{
		database.close();
		DEBUG("Deneme");
	}
	else
	{
		database.close();
		database.open(filePath, ios::out);
		database << Basic(name, 0, 0);
		database.close();
	}
}