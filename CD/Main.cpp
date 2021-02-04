#include <iostream>;
#include "Template.h";

void sortArray(int *array, int length)
{
	for (int i = 0; i < length; i++) 
	{
		for (int j = length - 1; j > i; j--)
		{
			if (array[j] < array[j - 1])
			{
				int newArr = array[j];
				array[j] = array[j - 1];
				array[j - 1] = newArr;
			}
		}
	}
}

int main()
{
	DynamicArray<int> test = DynamicArray<int>();
	test.addItem(5);
	test.addItem(4);
	test.addItem(3);
	test.addItem(2);
	test.addItem(1);
	test.sortItems();
	test.print();
	system("pause");
}