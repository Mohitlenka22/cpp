#include <iostream>
// #include <stdexcept>

using namespace std;

class Exception
{
private:
    string message;

public:
    Exception(string s)
    {
        message = s;
    }
    string what()
    {
        return this->message;
    }
};

void func(int x, int y)
{
    cout << x / y;
}

int main()
{
    int a = 6, b = 0;
    try
    {
        if (b == 0)
            // throw runtime_error("ZeroDivideError.");
            throw Exception("ZeroDivideError.");
        cout << a / b;
    }
    catch (Exception &e)
    {
        cout << e.what();
    }

    return 0;
}