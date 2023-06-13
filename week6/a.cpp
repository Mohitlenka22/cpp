#include <iostream>
using namespace std;

// Define a class called Number
class Number {
private:
  int x;
public:
  Number(int val) {
    x = val;
  }
  void printX() {
    cout << "x = " << x << endl;
  }
};

int main() {
  const int SIZE = 5;
  Number Array[SIZE] = {Number(1), Number(2), Number(3), Number(4), Number(5)};

  for (int i = 0; i < SIZE; i++) {
    Array[i].printX();
  }

  return 0;
}
