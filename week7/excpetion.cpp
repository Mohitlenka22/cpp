#include <iostream>
using namespace std;

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
            throw(x);
        }
    }
    catch (int i) // Handles all type of exception
    {
        cout << "This is ZeroDivide exception " << i;
    }

    return 0;
}