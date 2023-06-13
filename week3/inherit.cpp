#include <iostream>
using namespace std;

class A
{
protected:
    int a = 10;

private:
    int b = 11;

public:
    void display()
    {
        cout << a << endl;
    }
};

class B : public A
{
public:
    void Bdisplay()
    {
        cout << a << endl;
    }
};

int main()
{
    B b;
    b.display();
    b.Bdisplay();

    return 0;
}