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
    cout << i_size / 100 * 110000 + ((( i_size / 10 )* 10 -( i_size / 100) *100 ) /10) * 1100 +(i_size % 10) * 11;
    return 0;
}
