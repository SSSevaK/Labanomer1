#include <iostream>

int main()
{
	int hours = 0;
	do {
		std::cout << " enter hours  ";
		std::cin >> hours;
	} while (hours < 0 || hours >24);

	if (hours >=0   && hours < 6)
	{
		std::cout << "night";
	}
	if (hours >= 6 && hours < 13)
	{
		std::cout << "morning";
	}
	if (hours > 12 && hours < 19)
	{
		std::cout << "day";
	}
	if (hours >= 19)
	{
		std::cout << "evening";
	}
	return 0;
}

