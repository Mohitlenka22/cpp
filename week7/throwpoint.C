#include <iostream>
using namespace std;

void func(int x) // Throw point
{
    if (x == 0)
    {
        throw(x);
    }
}

int main()
{
    int a, b, x, i;
    cout << "Enter a & b: ";
    cin >> a >> b;
    x = a - b;
    try
    {
        if (x != 0)
        {
            cout << a / x;
        }
        else
        {
            func(x);
        }
    }
    catch (int i) // Handles all type of exception
    {
        cout << "This is ZeroDivide exception " << i;
    }
    return 0;
}