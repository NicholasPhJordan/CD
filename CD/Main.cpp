#include <iostream>;
#include "Template.cpp";

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
	//initial array
	int testArr[5] = { 4,2,5,1,3 };

	//print initial array
	for (int i = 0; i < 5; i++) 
	{
		std::cout << testArr[i] << ", ";
	}

	//sort array
	sortArray(testArr, 5);

	std::cout << " " << std::endl;

	//print sorted array
	for (int i = 0; i < 5; i++)
	{
		std::cout << testArr[i] << ", ";
	}

	std::cout << " " << std::endl;
	system("pause");
	system("cls");

	int sum = add<int>(3, 3);
	std::cout << sum << std::endl;
	system("pause");
}