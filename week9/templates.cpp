#include <iostream>
using namespace std;

// function template
template <typename t> // template <typename t>
t add(t a, t b)
{
    return a + b;
}

int main()
{
    cout << add(1, 2) << endl;
    cout << add(1.4, 2.4) << endl;
    return 0;
}
