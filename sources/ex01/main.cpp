#include "iter.hpp"
#include <iostream>

void test(const int & elem)
{
	std::cout << elem << std::endl;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter(arr, 10, &test);
}