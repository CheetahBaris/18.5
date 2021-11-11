#include <iostream>


class Stack
{
public:

	void push(int*& arr, int& size, int i)
	{
		arr[size] = i;
		arr[size++];


	}
	void pop(int*& arr, int& size)
	{

		arr[size--];

	}
	 
};

	void FillArr(int* const arr, const int size)
	{

		for (int i = 1; i < size; i++)
		{
			arr[i] = rand() % 10;

		}

	}
	void ShowArr(const int* const arr, const int size)
	{
		for (int i = 1; i < size; i++)
		{

			std::cout << arr[i] << "\t";


		}


	}

int main()
{


	Stack v;
	int size = 1;

	int* arr = new int[size];
	delete[] arr;

	FillArr(arr, size);

	v.push(arr, size, 2);
	v.push(arr, size, 1);
	v.push(arr, size, 5);

	 ShowArr(arr, size);

	v.pop(arr, size);

	 ShowArr(arr, size);
	 
	return 0;
}


