#include <iostream>
using namespace std;

class A
{
private:
    int a = 0;    // object variable.
    static int b; // class variable.

public:
    void Increment(void)
    {
        a++;
        b++;
        cout << "a = " << a << " b = " << b << endl;
    }
    static void Display(void)
    {
        // Can have only static variables.
        cout << "b = " << b << endl;
    }
};
int A ::b = 0;

int main()
{
    A obj1, obj2, obj3;
    obj1.Increment();
    obj2.Increment();
    obj3.Increment();
    A ::Display(); // without creating a object.

    return 0;
}