#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    Student(int id, string name);
    ~Student();
    void get_Data(void);
};

Student ::Student(int id, string name)
{
    cout << "Parameterized Contructor: " << endl;
    this->id = id;
    this->name = name;
    cout << "Id: " << this->id << " "
         << "Name: " << this->name << endl;
}

Student ::~Student()
{
    cout << "Destructor" << endl;
    cout << "Id: " << id << " "
         << "Name: " << name << endl;
}

// void Student ::get_Data(void)
// {
//     cout << "Id: " << id << " "
//          << "Name: " << name << endl;
// }

int main()
{
    Student s1(1, "abc"), s2(2, "cde"), s3(3, "xyz");
    // s1.get_Data();
    // s2.get_Data();
    // s3.get_Data();

    return 0;
}
