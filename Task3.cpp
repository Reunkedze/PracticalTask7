#include <iostream>

using namespace std;

#define SIZE 8

#define SwapINT(a, b)\
{\
	int copy = arr[a];\
	arr[a] = arr[b];\
	arr[b] = copy;\
}

int arr[SIZE];

void bubbleSort()
{
	for (size_t run = 0; run < SIZE - 1; run++)
	{
		for (size_t i = 0; i < SIZE - 1 - run; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				SwapINT(i, i + 1);
			}
		}
	}
}

int main()
{
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "Enter item " << i + 1 << ": ";
		cin >> arr[i];
	}
	
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}

	cout << endl;

	bubbleSort();

	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}

	cout << endl;
}
