#include "whatever.hpp"
#include <iostream>


int main()
{
	{
		int v1 = 10;
		int v2 = 100;

		std::cout << "v1: " << &v1 << std::endl << "v2: " << &v2 << std::endl;

		std::cout << &min(v1, v2) << std::endl;
		std::cout << &max(v1, v2) << std::endl;
		swap(v1, v2);
		std::cout << &min(v1, v2) << std::endl;
		std::cout << &max(v1, v2) << std::endl;
		v1 = 10;
		v2 = 10;
		std::cout << &min(v1, v2) << std::endl;
		std::cout << &max(v1, v2) << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return (0);
}