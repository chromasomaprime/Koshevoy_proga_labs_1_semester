#include <iostream>

int main()
{
	std::cout << "int; " << "size = 4 byte; " << "range = -2^31...2^31-1" << std::endl;
	std::cout << "unsigned int; " << "size = 4 byte; " << "range = 0...2^32-1" << std::endl;

	std::cout << "short; " << "size = 2 byte; " << "range = -2^15...2^15-1" << std::endl;
	std::cout << "unsigned short; " << "size = 2 byte; " << "range = 0...2^16-1" << std::endl;

	std::cout << "long long; " << "size = 8 byte; " << "range = -2^63...2^63-1" << std::endl;
	std::cout << "unsigned long long; " << "size = 8 byte; " << "range = 0...2^32-1" << std::endl;

	std::cout << "char; " << "size = 1 byte; " << "range = -2^7...2^7-1" << std::endl;
	std::cout << "unsigned char; " << "size = 1 byte; " << "range = 0...2^8-1" << std::endl;

	std::cout << "float; " << "size = 4 byte; " << "range = 6~7" << std::endl;

	std::cout << "double; " << "size = 8 byte; " << "range = 15~16" << std::endl;

	std::cout << "bool; " << "size = 1 byte; " << "true or false" << std::endl;


	int a = 2;
	int b = 4;
	int c = a + b;
	std::cout << c << std::endl;

	short f = 14;
	short e = 13;
	short g = f * e;
	std::cout << g << std::endl;

	long long h = 15043;
	long long i = 2;
	long long j = h / i;
	std::cout << j << std::endl;

	char k = 1;
	std::cout << k << std::endl;

	float n = 23.0f;
	float o = 4.0f;
	float p = n / o;
	std::cout << p << std::endl;

	bool x = true;
	bool y = false;
	bool z = x * y;
	std::cout << z << std::endl;

	return 0;
}