#include <iostream>
#include <cmath>

int main() 
{
    double x, n;

    std::cout << "enter x (0 < x < 100): ";
    std::cin >> x;

    if (x <= 0 || x >= 100)
    {
        std::cout << "error" << std::endl;
        return 0;
    }

    std::cout << "enter n (0 < n < 100): ";
    std::cin >> n;

    if (n <= 0 || n >= 100)
    {
        std::cout << "error" << std::endl;
        return 0;
    }

    double m = pow(x, 1.0 / n);
    std::cout << m << std::endl;

    return 0;
}                                                         