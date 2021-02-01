#include <iostream>;

template <typename T>
class DynamicArray
{
public:

	int m_length;

	//constructor
	DynamicArray<T>()
	{
		T* m_items[];
	}

	//deconstructor
	~DynamicArray<T>()
	{
		delete T* m_items[];
	}

	//add item to array
	void addItem(T item)
	{
		T* temp = new T * [m_length + 1];

		for (int i = 0; i < m_length; i++)
		{
			temp[i] = m_items[i];
		}

		temp[m_length] = item;

		delete temp;
		NULL;
	}


	bool removeItem(T) {}

	//uses the bubble method to sort the items 
	void sortItems()
	{
		for (int i = 0; i < m_length; i++)
		{
			for (int j = m_length - 1; j > i; j--)
			{
				if (m_items[j] < m_items[j - 1])
				{
					int newArr = m_items[j];
					m_items[j] = m_items[j - 1];
					m_items[j - 1] = newArr;
				}
			}
		}
	}

	bool getItem(int index, T* item) {}

	// gets and returns the length 
	int getLength()
	{
		return m_length;
	}
};