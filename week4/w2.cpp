#include <iostream>
using namespace std;

class Shape
{
public:
    void draw()
    {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle." << endl;
    }

    void draw(int radius)
    {
        this->radius = radius;
        cout << "Drawing a circle with radius " << radius << "." << endl;
    }

    Circle operator+(const Circle &other)
    {
        Circle newCircle;
        newCircle.radius = this->radius + other.radius;
        return newCircle;
    }

    int getRadius()
    {
        return this->radius;
    }

private:
    int radius = 1;
};

int main()
{
    Circle circle1, circle2;

    // Demonstrate function overriding
    circle1.draw();

    // Demonstrate function overloading
    circle2.draw();
    circle2.draw(5);
    // cout << circle1.getRadius() << " " << circle2.getRadius() << endl;

    // Demonstrate operator overloading
    Circle circle3 = circle1 + circle2;
    cout << "The combined radius is " << circle3.getRadius() << "." << endl;

    return 0;
}