#include <iostream>

int main()
{
    float n = 3.1415927;
    float L = 0;
    std::cout << "enter L : \n";
    std::cin >> L;
    while (L <= 0)
    {
        std::cout << "size L <= 0, enter size L > 0" << '\n';
        std::cin >> L;
    }
    std::cout << "R = " <<L/(2 * n) << '\n';
    std::cout << "S = " << n*(L / (2 * n))* (L / (2 * n)) << '\n';
    return 0;
}