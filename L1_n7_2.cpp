#include <iostream>
#include <cmath>

int main()
{
    int x = 0;
    int y = 0;
    int x2 = 0;
    int y2 = 0;
    int r;
    std::cout << "enter x and y center of the circle";
    std::cin >> x >> y;
    do 
    {
        std::cout << "enter x and y"<<'\n';
        std::cin >> r;
    } while (r < 0);
    std::cout << "enter x and y center of point" <<'\n';
    std::cin >> x2 >> y2;
    if (sqrt((x2 - x)*(x2 - x) + (y2 - y)*(y2 - y)) < r)
    {
        std::cout << "inside the circle";
    }
    else
    {
        std::cout << "outside the circle";
    }
    return 0;
}
