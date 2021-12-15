#include "User.h"

User::User()
{
	_Id += 10;
	_Name = "Name";
	_Surname = "Surname";
	_PhoneNumber = "PhoneNumber";

}

User::User(string Name, string Surname, string PhoneNumber)
{
	_Id += 10;
	_Name = Name;
	_Surname = Surname;
	_PhoneNumber = PhoneNumber;
}

int User::getId()
{
	return _Id;
}
