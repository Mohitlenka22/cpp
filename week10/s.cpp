#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s1, s2;

    // Input values into the first stack
    int n1;
    cout << "Enter the number of elements for the first stack: ";
    cin >> n1;
    cout << "Enter " << n1 << " elements for the first stack:\n";
    for (int i = 0; i < n1; i++) {
        int value;
        cin >> value;
        s1.push(value);
    }

    // Input values into the second stack
    int n2;
    cout << "Enter the number of elements for the second stack: ";
    cin >> n2;
    cout << "Enter " << n2 << " elements for the second stack:\n";
    for (int i = 0; i < n2; i++) {
        int value;
        cin >> value;
        s2.push(value);
    }

    // Display the contents of the two stacks
    cout << "First stack:\n";
    while (!s1.empty()) {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << "\nSecond stack:\n";
    while (!s2.empty()) {
        cout << s2.top() << " ";
        s2.pop();
    }

    return 0;
}
