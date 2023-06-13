#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    void set_Data(void);
    void get_Data(void);
};

void Student ::set_Data(void)
{
    cout << "Enter Id & Name: ";
    getline(cin, name);
    cin >> id;
    // cin >> name;
}

void Student ::get_Data(void)
{
    cout << "Id: " << id << " "
         << "Name: " << name << endl;
}

int main()
{
    Student s1;
    s1.set_Data();
    s1.get_Data();

    return 0;
}
