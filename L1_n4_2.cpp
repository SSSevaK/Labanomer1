#include <iostream>

int main()
{
    int number = 0;
    std::cout << "enter numner : ";
    std::cin >> number;
    if (number > 60)
    {
        std::cout <<'\n' << "nice";
    }
    if (number > 30 || number < 60)
    {
        std::cout << '\n' << "good";
    }
    if (number > 17 || number < 30)
    {
        std::cout << '\n' << "not bad";
    }
    else
    {
        std::cout << '\n' << "very bad";
    }
    return 0;
}