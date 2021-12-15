#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
using namespace std;

template<typename T>
class DataBaseVector
{
public:
	DataBaseVector();
	void AddToVector(T object);
	~DataBaseVector();
	friend ostream& operator<< <T>(ostream& out, const DataBaseVector& object);
private:
	T* _data;
	int _size;

};

