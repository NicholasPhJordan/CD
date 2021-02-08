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

	void sort();

private:
	int m_nodeCount;
};