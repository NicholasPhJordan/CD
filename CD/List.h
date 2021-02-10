#pragma once
#include <iostream>;
#include "Node.h";
#include "Iterator.h";

template<typename T>
class List
{
public:
	List<T>();
	List<T>(List<T>&);
	~List<T>();
	void destroy();
	const Iterator<T> begin();
	const Iterator<T> end();
	const bool contains(const T& objects);
	void pushFront(const T& value);
	void pushBack(const T& value);
	bool insert(const T& value, int index);
	bool remove(const T& value);
	const void print();
	void initialze();
	const bool isEmpty();
	bool getData(Iterator<T>& iter, int index);
	const int getLength();
	const List<T>& operator =(const List<T>& otherList);
	void sort();

private:
	Node<T> m_first;
	Node<T> m_last;
	int m_nodeCount;
};

template<typename T>
inline List<T>::List<T>()
{

}

//delets all nodes in the list 
template<typename T>
inline void List<T>::destroy()
{

}

//returns an iterator pointing to the first node in the list
template<typename T>
inline const Iterator<T> List<T>::begin()
{

}

//returns the next item after the last node int the list
template<typename T>
inline const Iterator<T> List<T>::end()
{

}

//checks to see if the given item is in the list
template<typename T>
inline const bool List<T>::contains(const T& objects)
{

}

//adds a new node to the beggining of the list
template<typename T>
inline void List<T>::pushFront(const T& value)
{

}

//adds a new node to the end of the list
template<typename T>
inline void List<T>::pushBack(const T& value)
{

}

//adds a new node at the given index
template<typename T>
inline bool List<T>::insert(const T& value, int index)
{

}

//removes all nodes with the given value
template<typename T>
inline bool List<T>::remove(const T& value)
{

}

//prints the values for all the nodes
template<typename T>
inline const void List<T>::print()
{
	for (Iterator<int> iter == begin())
	{
		std::cout << *iter << std::endl;
	}
}

//sets the default values for the first node pointer, the last node pointer, and the node count
template<typename T>
inline void List<T>::initialze()
{

}

//returns whither or not the list has any nodes in it
template<typename T>
inline const bool List<T>::isEmpty()
{

}

//sets the given iterator to point to a node at the given index
template<typename T>
inline bool List<T>::getData(Iterator<T>& iter, int index)
{

}

//returns the amount of nodes in the list
template<typename T>
inline const int List<T>::getLength()
{
	
}