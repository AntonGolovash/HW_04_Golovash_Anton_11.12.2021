#include "Vector.h"

template<typename T>
Vector<T>::Vector() : _data(nullptr), _size(0)
{
	cout << "Constructor default\t" << this << endl;
}

template<typename T>
Vector<T>::Vector(const Vector& otherVector)// конструктор копирования вектора
{
	cout << "Constructor copy:\t" << this << endl;

	_size = otherVector._size;
	_data = new T[_size];

	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = otherVector._data[i];
	}
}

template<typename T>
Vector<T>::Vector(Vector&& other) : _data(nullptr), _size(0)// конструктор перемещения вектора
{
	_data = other._data;
	_size = other._size;

	other._data = nullptr;
	other._size = 0;

	cout << "Constructor movement:\t" << this << endl;

}

template<typename T>
Vector<T>::~Vector()
{
	if (_data != nullptr)
	{
		cout << "Destructor:\t" << endl;
		delete[] _data;
	}
}

template<typename T>
Vector<T>& Vector<T>::operator=(const Vector& rightVector)// оператор копирования вектора
{
	if (this == &rightVector)
		return *this;

	cout << "operator= copy:\t" << this << endl;

	_size = rightVector._size;
	_data = new T[_size];

	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = rightVector._data[i];
	}

	return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator=(Vector&& other)// оператор перемещения вектора
{
	cout << "operator= assignment:\t" << this << endl;
	delete[] _data;

	_data = other._data;
	_size = other._size;

	other._data = nullptr;
	other._size = 0;

	return *this;
}

template<typename T>
Vector<T> Vector<T>::sort()// сортировка вектора по возрастанию 
{
	bool vectorIsSorted = false;
	T* temp = new T[1];
	while (!vectorIsSorted)
	{
		vectorIsSorted = true;
		for (int i = 0; i < _size-1; i++)
		{
			if (_data[i] > _data[i+1] && i+1)
			{
				vectorIsSorted = false;
				*temp = _data[i];
				_data[i] = _data[i + 1];
				_data[i + 1] = *temp;
			}
		}
	}
	return *this;
}

template<typename T>
Vector<T> Vector<T>::sort(Vector<T> vector)
{
	return Vector<T>();
}

template<typename T>
void Vector<T>::pop_back()// удаление последнего элемента вектора
{
	if (_data != nullptr && _size > 0)
	{
		T* temp = new T[--_size];

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
	}
}

template<typename T>
void Vector<T>::push_back(T item)// добавление элемента в конец вектора
{
	if (_data != nullptr && _size > 0)
	{
		T* temp = new T[++_size];
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
		_data[_size - 1] = item;
	}
	else
	{
		_size = 1;
		_data = new T[_size];
		_data[0] = item;
	}
}

template<typename T>
int Vector<T>::size()
{
	return _size;
}

template<typename T>
ostream& operator<< (ostream& out, const Vector<T>& vector)// вывод в консоль
{
	for (size_t i = 0; i < vector._size; i++)
	{
		out << to_string(vector._data[i]) << "\t";
	}
	return out;
}
