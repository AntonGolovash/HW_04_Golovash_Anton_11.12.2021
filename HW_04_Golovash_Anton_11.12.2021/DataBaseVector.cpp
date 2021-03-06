#include "DataBaseVector.h"

template<typename T>
DataBaseVector<T>::DataBaseVector() : _data(nullptr), _size(0)
{
	cout << "DataBaseVector constructor default\t" << this << endl;
}

template<typename T>
void DataBaseVector<T>::AddToVector(T object)
{
	if (_data != nullptr && _size > 0)
	{
		_size++;
		T* temp = new T[_size];
		_size--;
		for (size_t i = 0; i < _size; i++)
		{
			temp[i] = _data[i];
		}

		delete[] _data;
		_data = new T[_size];

		for (size_t i = 0; i < _size; i++)
		{
			_data[i] = temp[i];
		}

		delete[] temp;
		_data[_size - 1] = object;
	}
	else
	{
		_size = 1;
		_data = new T[_size];
		_data[0] = object;
	}
}

template<typename T>
DataBaseVector<T>::~DataBaseVector()
{
	if (_data != nullptr)
	{
		cout << "DataBaseVector destructor:\t" << endl;
		delete[] _data;
	}

}

template<typename T>
ostream& operator<< (ostream& out, const DataBaseVector<T>& object)
{
	for (size_t i = 0; i < object._size; i++)
	{
		out << to_string(object._data[i]) << "\t";
	}
	return out;
}
