#include <iostream>

int main()
{
    int minits_on=0;
    int hours_on=1;
    int minits_off = 0;
    int hours_off = 0;
    std::cout << "enter hours and minits  without :" << '\n';
     do
    {
        std::cin >> hours_on >> minits_on;
        while (minits_on < 0 || hours_on < 0 || minits_on>59|| hours_on>23)
        {
            std::cout << "enter time of arrival hours >= 0 but <24 and minits >= 0 but < 60  without :" << '\n';
            std::cin >> hours_on >> minits_on;
        }
        hours_on *= 60;
        hours_on += minits_on;
        std::cout << "enter departure hours and minits  without :" << '\n';
        std::cin >> hours_off >> minits_off;
        while (minits_off < 0 || hours_off < 0|| minits_off>59 || hours_off>23)
        {
            std::cout << "enter hours >= 0 but <24 and minits >= 0 but < 60  without :" << '\n';
            std::cin >> hours_off >> minits_off;
        }
        hours_off *= 60;
        hours_off += minits_off;
     } while (hours_off < hours_on);
    std::cout << "waiting time = " << (hours_off - hours_on)/60 << "hours and " << (hours_off - hours_on) - ((hours_off - hours_on) / 60)*60 <<"minits";
    return 0;
}
