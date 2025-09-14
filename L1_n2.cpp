#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    int i_size;
    cout << "enter three-digit nomber ";
    cin >> i_size;
    while (i_size < 100 || i_size > 999)
    {
        cout << "enter nomber > 99 but < 1000";
        cin >> i_size;
    }
    cout << " itog = " << i_size % 100 * 10 + i_size / 100;
}