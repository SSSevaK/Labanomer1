#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    int i_size = 0;
    int i_1 = 0;
    int i_2 = 0;
    int i_3 = 0;
    cout << "enter three-digit nomber ";
    cin >> i_size;
    while (i_size < 100 || i_size > 999)
    {
        cout << "enter nomber > 99 but < 1000";
        cin >> i_size;
    }
    i_1 = i_size / 100;
    i_2 = i_size % 10;
    i_3 = (i_size % 100 - i_size % 10) / 10;
    if (i_1 < i_2) {
        std::swap(i_1, i_2);
    }
    if (i_2 < i_3) {
        std::swap(i_2, i_3);
    }
    if (i_1 < i_2) {
        std::swap(i_1, i_2);
    }
    cout << i_1 << " " << i_2 << " " << i_3;
}

