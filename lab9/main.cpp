// Вариант 10.
// Дано целое число типа long long, выведите на экран содержимое каждого из его байтов,
// используя знания по указателям. Дайте обоснование полученному результату.

#include <iostream>

int main()
{
    long long num;
    std::cout << "enter num: " << std::endl;
    std::cin >> num;

    unsigned char* bytePointer = reinterpret_cast<unsigned char*>(&num);

    std::cout << "contents of bytes long long number:" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << "byte " << i << ": " << static_cast<int>(bytePointer[i]) << std::endl;
    }

    return 0;
}