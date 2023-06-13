#include <iostream>
using namespace std;

class A
{
private:
    int a, b;

public:
    A(){};
    A(int a, int b);
    int add(void);
};

A ::A(int a, int b)
{
    this->a = a;
    this->b = b;
}

int A ::add(void)
{
    return a + b;
}

class B : public A
{
private:
    int x, y;

public:
    B(int x, int y);
    int mul(void);
};

B ::B(int x, int y) : A(x, y)
{
    this->x = x;
    this->y = y;
}

int B ::mul()
{
    return x * y;
}

int main()
{
    A *Aptr;
    A Aobj(2, 3);
    Aptr = &Aobj;
    cout << Aptr->add() << endl;

    B *Bptr;
    B Bobj(3, 4);
    Bptr = &Bobj;
    cout << Bptr->add() << endl;
    cout << Bptr->mul() << endl;
    return 0;
}