#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float c, d;
    cout << "Enter a & b: " << endl;
    cin >> a >> b;
    cout << "Enter c & d: " << endl;
    cin >> c >> d;

    try
    {
        if (b != 0)
            cout << a / b << endl;
        else
            throw(b);
        if (d != 0)
            cout << c / d << endl;
        else
            throw(d);
    }
    catch (...)
    {
        cout << "Caught Exception! " << d;
    }
    return 0;
}