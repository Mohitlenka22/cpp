#include <iostream>
#include <math.h>
using namespace std;

class Polygon
{
private:
    int a;

public:
    void area(void);  // square area
    void area(int a); // hexagon area;
};
void Polygon ::area()
{
    cout << "Enter a: ";
    cin >> a;
    cout << "Area of square: " << a * a << endl;
}

void Polygon ::area(int a)
{
    cout << "Area of Hexagon: " << (float)(3 * pow(3, 1 / 2) * pow(a, 2)) / 2;
}

int main()
{
    Polygon obj1;
    obj1.area();
    obj1.area(2);

    return 0;
}