#include <iostream>

int main()
{
    int month = 0;
	do {
		std::cout << " enter nomber of month  ";
		std::cin >> month;
	} while (month < 0 || month >12);

	if (month > 3 && month < 6)
	{
		std::cout << "spring";
	}
	if (month > 5 && month < 10)
	{
		std::cout << "summer";
	}
	if (month > 8  && month < 11)
	{
		std::cout << "autumn";
	}
	if (month >= 11 && month <= 12  || month >= 1 && month <= 2)
	{
		std::cout << "winter";
	}
	return 0;
}

