#include "User.h"

inline User::User()
{
	_Id += 10;
	_Name = "Name";
	_Surname = "Surname";
	_PhoneNumber = "PhoneNumber";
}

inline User::User(string Name, string Surname, string PhoneNumber)
{
	_Id += 10;
	_Name = Name;
	_Surname = Surname;
	_PhoneNumber = PhoneNumber;
}

inline int User::getId()
{
	return _Id;
}

inline string User::getName()
{
	return _Name;
}

inline string User::getSurName()
{
	return _Surname;
}

inline string User::getPhoneNumber()
{
	return _PhoneNumber;
}

inline ostream& operator<<(User& object, ostream& out)
{
	out << to_string(object.getId()) << endl;
	out	<< (object.getName()) << endl;
	out << (object.getSurName()) << endl;
	out << (object.getPhoneNumber()) << endl;
	return out;
}
