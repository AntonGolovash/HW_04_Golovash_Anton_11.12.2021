#include "User.h"

inline User::User()
{
	Id += 10;
	_Name = "Name";
	_Surname = "Surname";
	_PhoneNumber = "PhoneNumber";
}

inline User::User(string Name, string Surname, string PhoneNumber)
{
	Id += 10;
	_Name = Name;
	_Surname = Surname;
	_PhoneNumber = PhoneNumber;
}

inline int User::getId()
{
	return Id;
}