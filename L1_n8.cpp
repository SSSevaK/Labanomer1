#include <iostream>
#include <cmath>

int main()
{
    int x1=0, y1=0;
    int x2=0, y2=0;
    int x3=0, y3=0;
    std::cout << "enter coordinates of the triangle" <<'\n';
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    std::cin >> x3 >> y3;
    std::cout << "perimeter of triangle = " << sqrt((x2 - x1)*(x2 - x1) + (y2 - y1) * (y2 - y1)) + sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2))+ sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    return 0;


}
