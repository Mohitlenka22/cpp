#include <bits/stdc++.h>
using namespace std;

class Unary
{
private:
    int a, b, c;

public:
    Unary(){};
    Unary(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    friend Unary operator+(Unary &other, Unary &self)
    {
        // can't use "this" keyword we can use it in only nonstatic memeber function
        Unary obj;
        obj.a = self.a + other.a;
        obj.b = self.b + other.b;
        obj.c = self.c + other.c;

        return obj;
    }
    void getValues(void)
    {
        cout << "a = " << this->a << " b = " << this->b << " c = " << this->c << endl;
    }
};

inline int add(int a, int b)
{
    return (a + b);
}

int main()
{
    Unary u1(4, 5, 6), u2(3, 4, 5), u3;
    u3 = u1 + u2;
    u3.getValues();

    // inline functions
    int a, b;
    cout << "Enter a&b: ";
    cin >> a >> b;
    cout << "a + b: " << add(a, b) << endl;
    return 0;
}
