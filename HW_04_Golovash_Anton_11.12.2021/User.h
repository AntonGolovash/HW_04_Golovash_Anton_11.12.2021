#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
using namespace std;

class User
{

public:
	static int _Id;
	User();
	User(string Name, string Surname, string PhoneNumber);
	int getId();
private:
	string _Name;
	string _Surname;
	string _PhoneNumber;
};