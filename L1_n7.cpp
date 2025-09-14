#include <iostream>
#include <cmath>

int main()
{
    float n = 3.1415927;
    float S;
    std::cout << "enter S : \n";
    std::cin >> S;
    while (S <= 0)
    {
        std::cout << "size S <= 0, enter size S > 0" << '\n';
        std::cin >> S;
    }

    std::cout << "size D = " << 2 * sqrt (S / n) <<'\n';
    std::cout << "size L = " << 2 * n * sqrt (S / n)<< '\n';
    return 0;
}