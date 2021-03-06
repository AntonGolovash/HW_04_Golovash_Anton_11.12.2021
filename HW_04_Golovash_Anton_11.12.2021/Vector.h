#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
using namespace std;

template<typename T>
class Vector
{
public:
	Vector();
	Vector(const Vector& otherVector);
	Vector(Vector&& other);// rvalue
	~Vector();
	Vector<T>& operator= (const Vector& rightVector);
	Vector<T>& operator= (Vector&& other);
	Vector<T> sort();
	static Vector<T> sort(Vector <T> vector);
	void pop_back();
	void push_back(T item);
	friend ostream& operator<< <T>(ostream& out, const Vector& vector);
	int size();
private:
	T* _data;
	int _size;
};