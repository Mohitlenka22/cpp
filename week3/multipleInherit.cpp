#include <iostream>
using namespace std;

class A
{
protected:
    int a = 10;

public:
    void Adisplay(void)
    {
        cout << "a: " << a << endl;
    }
};

class B
{
protected:
    int b = 20;

public:
    void Bdisplay()
    {
        cout << "b: "
             << " " << b << endl;
    }
};

class C : public A, B
{
protected:
    int c = 30;

public:
    void Cdisplay(void)
    {
        cout << "a & b & c: " << a << " " << b << " " << c << " " << endl;
    }
};

int main()
{
    A obj1;
    obj1.Adisplay();
    B obj2;
    obj2.Bdisplay();
    C obj3;
    obj3.Cdisplay();

    return 0;
}