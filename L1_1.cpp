#include <iostream>

int main()
{
   
    int i_size;
    std::cout << "enter the size of the side of the square ";
   std:: cin >> i_size;
    while (i_size <= 0)
    {
        std::cout << "size <= 0, enter size > 0" <<'\n';
        std::cin >> i_size;
    }
    std::cout << "perimeter = " << i_size * 4 << '\n';
    std::cout << "square = " << i_size * i_size;
    return 0;
}