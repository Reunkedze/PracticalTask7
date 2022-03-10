#include <iostream>

using namespace std;

namespace MyNamespace
{
	float* arrPtr;

	float* InitArray(int size)
	{
		float* ptr;
		ptr = new (nothrow) float[size];
		return ptr;
	}

	void PrintArray(int size, float* ptr)
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << ptr[i] << endl;
		}
	}

	void NumbersCount(int size, float* ptr)
	{
		int positive = 0;
		int negative = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (ptr[i] < 0)
			{
				negative++;
			}
			else if (ptr[i] > 0)
			{
				positive++;
			}
		}
		cout << "Array contain " << negative << " negative and " << positive << " positive numbers" << endl;
	}
}