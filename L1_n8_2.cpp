#include <iostream>

int main()
{
    int day;
    do
    {
        std::cout << "enter the day of the week number  ";
        std::cin >> day;
    } while (day < 1 || day > 7);
    switch (day)
    {
    case 1:
        std::cout << "Monday ";
        break;
    case 2:
        std::cout << "Tuesday";
        break;
case 3:
    std::cout << "Wednesday";
    break;
    case 4:
        std::cout << "Thursday";
        break;
    case 5:
        std::cout << "Friday";
        break;
    case 6:
        std::cout << "Saturday";
        break;
    case 7:
        std::cout << "Sunday ";
        break;
    }
    return 0;
}