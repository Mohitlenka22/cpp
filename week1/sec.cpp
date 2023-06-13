#include <iostream>
using namespace std;

int add(int a = 0, int b = 10, int c = 12);

int main()
{
    int a, b, c;
    cout << "Enter a, b, c: " << endl;
    cin >> a >> b >> c;
    cout << add(a, b);
 
    return 0;
}

//inline functions replace body with function call
inline int add(int a, int b, int c)
{
    return (a + b + c);
}