#pragma once
#include <iostream>;
#include "Node.h";

template<typename T>
class Iterator
{
public:
	Iterator();
	Iterator(Node<T>* node);
	Iterator<T> operator ++();
	Iterator<T> operator --();
	const bool operator ==(const iterator<T>& iter);
	const bool operator !=(const iterator<T>& iter);
	T* operator ();

private:
	Node<T>* current;
};
