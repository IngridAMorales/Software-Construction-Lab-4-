nclude <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main()
{
    Rectangle rect1(3,4);

    cout << "Rectangle 1 area: " << rect1.area() << endl;
    cout << "Rectangle 1 perimeter: " << rect1.perimeter() << endl;
    return 0;
}
