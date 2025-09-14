#include <iostream>

int main()
{
    int i_1 = 0;
    int i_2 = 0;
    int i_3 = 0;
    std::cout << "enter 3 numbers" << '\n';
    std::cin >> i_1;
    std::cin >> i_2;
    std::cin >> i_3;
    if (i_1 > i_2) {
        std::swap(i_1, i_2);
    }
    if (i_2 > i_3) {
        std::swap(i_2, i_3);
    }
    if (i_1 > i_2) {
        std::swap(i_1, i_2);
    }
       std::cout <<"sorted numbers look like this : " << i_1 << " " << i_2 << " " << i_3;
       return 0;
}