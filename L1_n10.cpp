#include <iostream>

int main()
{
    int years=0;
    int month = 0;
    int day = 0;
    int years1 = 0;
    int month1= 0;
    int day1= 0;
    int age = 0;
    do 
    {
        std::cout << "What is today's date? without : \n";
        std::cin >> day1;
        std::cin >> month1;
        std::cin >> years1;
        std::cout << "enter your date of birth without : \n";
        std::cin >> day;
        std::cin >> month;
        std::cin >> years;
        age = ((years1 - years) * 360 + (month1 - month) * 30 + day1 - day);
        if (age < 0)
        {
            std::cout << "mistake, your age < 0 : \n";
        }
    } while(age <= 0 || day < 0|| day > 30 || month < 0 || month > 12  || day1 < 0 || day1 > 30 || month1 < 0 || month1 > 12 || years<0 || years1<0);
    std::cout<< "your age is : " << age / 360 << " yaer, "  << (age % 360) / 30 << " month, "   << age % 30 << " days ";
}
