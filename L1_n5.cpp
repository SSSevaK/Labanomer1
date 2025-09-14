#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    int i_size;
    cout << "enter nomber > 99 but < 1000 \n";
    cin >> i_size;
    while (i_size < 99 || i_size > 999)
    {
        cout << "enter nomber > 99 but < 1000 \n";
        cin >> i_size;
    }
    cout << "the sum of the numbers = " << (i_size % 10) * 100+ ((i_size - (i_size / 100 * 100)) / 10) * 10 + i_size / 100;
    return 0;
}