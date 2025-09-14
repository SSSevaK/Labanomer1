#include <iostream>

int main()
{
    int years = 0;
    int month = 0;
    int day = 0;
    int age;
    do
    {
        std::cout << "What is today's date? without : \n";
        std::cin >> day;
        std::cin >> month;
        std::cin >> years;
        age = years*360+month*30+day;
        if (age < 0)
        {
            std::cout << "mistake, your age < 0 : \n";
        }
    } while (age <= 0 || day < 0 || day > 30 || month < 0 || month > 12);
    std::cout << "next date is " << age / 360 << " yaer, " << (age % 360) / 30 << " month, " << age % 30+1 << " days ";
    return 0;
}