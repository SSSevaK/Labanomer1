// L1_n2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int i_1 = 0;
    int i_2 = 0;
    int i_3 = 0;
    std::cout << "enter 3 numbers" <<'\n';
    std::cin >> i_1;
    std::cin >> i_2;
    std::cin >> i_3;
    if (i_1 < i_2) {
        std::swap(i_1, i_2);
    }
    if (i_2 < i_3) {
        std::swap(i_2, i_3);
    }
    if (i_1 < i_2) {
        std::swap(i_1, i_2);
    }
    std::cout << "the smallest of the numbers is equal to : " << i_3 << '\n' << "the biggest of the numbers is equal to : " << i_1 << '\n';
    std::cout << "sum =  " << i_1 + i_3 + i_2 << '\n';
    std::cout << "product of numbers =  " << i_1 * i_3 * i_2 << '\n';
    std::cout << "average of numbers =  " << (i_1 + i_2 + i_3)/3;
    return 0;
}