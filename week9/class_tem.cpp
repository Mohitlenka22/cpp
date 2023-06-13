#include <iostream>
using namespace std;

template <typename T>
class Sum
{
public:
    T a, b;
    void getab()
    {
        cin >> a >> b;
    }
    T add()
    {
        return a + b;
    }
};

int main()
{
    Sum<int> obj1;
    Sum<float> obj2;
    obj1.getab();
    obj2.getab();
    cout << obj1.add() << endl;
    cout << obj2.add() << endl;
    return 0;
}