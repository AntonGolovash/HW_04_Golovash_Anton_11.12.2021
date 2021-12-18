#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
#include "Vector.h"
#include "Vector.cpp"
#include "User.h"
#include "User.cpp"
#include "DataBaseVector.h"
#include "DataBaseVector.cpp"
using namespace std;

template<typename T>
int GetVectorSize(T& collection)
{
	return collection.size();
}

int User::_Id = 10;

int main()
{
	Vector<int> vector;
	vector.push_back(2);
	vector.push_back(1);
	vector.push_back(5);
	vector.push_back(9);
	vector.push_back(8);
	vector.push_back(3);
	vector.push_back(6);
	vector.push_back(4);
	vector.push_back(7);
	vector.push_back(10);

	cout << vector << endl;
	cout << vector.sort() << endl;
	User user1("Ivan", "Ivanov", "123345985623");
	cout << user1 << endl;
	DataBaseVector<User> DBVector;
	DBVector.AddToVector(user1);
}

