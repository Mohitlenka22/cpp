#include <iostream>
using namespace std;

// void swap(float *x, float *y);
void swap(float &x, float &y);

int main()
{
    float a, b;
    cout << "Enter a, b: " << endl;
    cin >> a >> b;
    cout << "Before a & b: " << a << " & " << b << endl;
    // swap(&a, &b);
    swap(a, b);
    cout << "After a & b: " << a << " & " << b;

    return 0;
}

// using pointers
/*
 void swap(float *x, float *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
*/

// using reference variables
void swap(float &x, float &y)
{
    int temp = x;
    x = y;
    y = temp;
}