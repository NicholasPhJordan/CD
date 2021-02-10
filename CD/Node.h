#pragma once
#include <iostream>;

template<typename T>
class Node
{
public:
	Node();
	Node(T value);
	Node<T>* next();
	Node<T>* previous();
	T data();
};

template<typename T>
inline Node<T>::Node(T value)
{
	data() = value;
	next();
	previous();
}

template<typename T>
inline Node<T>* Node<T>::next()
{

}