#include <iostream>
#include "mylib.h"
#define SIZE 4

using namespace std;
using namespace MyNamespace;

int main()
{
	float* arrPtr;
	arrPtr = InitArray(SIZE);
	PrintArray(SIZE, arrPtr);
	NumbersCount(SIZE, arrPtr);
	return 0;
}