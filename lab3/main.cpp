#include <iostream>

int main()
{
    unsigned int x;
    int i;

    std::cout << "enter x (0, 10^9)";
    std::cin >> x;

     if (x < 0 || x > 1000000000)
    {
        std::cout << "ERROR" << std::endl;
        return 0;
    }

    std:: cout << "enter i (0, 31)";
    std:: cin >> i;

    if (i < 0 || i > 31)
    {
        std::cout << "ERROR" << std::endl;
        return 0;
    }

    x |= (1 << i);
    std::cout << x << std::endl;
    
    return 0;
}