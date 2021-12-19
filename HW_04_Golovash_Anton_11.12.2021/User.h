#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
using namespace std;

class User
{

public:
	User();
	User(string Name, string Surname, string PhoneNumber);
	int getId();
	string getName();
	string getSurName();
	string getPhoneNumber();
	string ToString();
private:
	static int _Id;
	string _Name;
	string _Surname;
	string _PhoneNumber;
};
