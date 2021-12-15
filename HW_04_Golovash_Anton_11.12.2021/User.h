#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
using namespace std;

class User
{

public:
	User(int Id, string Name, string Surname, string PhoneNumber);
	int getId();
private:
	static int _Id;
	string _Name;
	string _Surname;
	string _PhoneNumber;
};

