#include <bits/stdc++.h>
using namespace std;

inline int add(int a, int b);

int main()
{
    int a, b;
    cout << "Enter a&b: ";
    cin >> a >> b;
    cout << "a + b: " << add(a, b) << endl;

    return 0;
}

inline int add(int a, int b)
{
    return (a + b);
}