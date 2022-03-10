#include <iostream>
#define NumCheck()\
{\
	int num;\
	std::cout << "Enter validation number: ";\
	std::cin >> num;\
	std::cout << "Enteer validation boundary: ";\
	int boundary;\
	std::cin >> boundary;\
	if (num >= 0 && num < boundary)\
	{\
		std::cout << "true" << std::endl;\
	}\
	else\
	{\
		std::cout << "false" << std::endl;\
	}\
}

using namespace std;

int main()
{
	NumCheck();
}
