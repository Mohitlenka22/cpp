#include <iostream>
using namespace std;

class Employee
{
private:
    int eid;
    string ename;

public:
    Employee();
    Employee(int eid, string ename);
    Employee(const Employee &obj);
    ~Employee();
    void get_Data(void);
};

Employee ::Employee()
{
    cout << "Default constructor" << endl;
    eid = 0;
    ename = "None";
}

Employee ::Employee(int eid, string ename)
{
    cout << "Parameterized Constructor: " << endl;
    this->eid = eid;
    this->ename = ename;
}

Employee ::Employee(const Employee &obj)
{
    cout << "Copy Constructor: " << endl;
    eid = obj.eid;
    ename = obj.ename;
}

Employee ::~Employee()
{
    cout << "Destructor: " << endl;
    cout << "Eid: " << eid << " "
         << "Ename: " << ename << endl;
}

void Employee ::get_Data(void)
{
    cout << "Eid: " << eid << " "
         << "Ename: " << ename << endl;
}

int main()
{
    // Default constructor
    Employee e1;
    e1.get_Data();
    // Parameterized constructor
    Employee e2(12, "Mohit");
    e2.get_Data();
    // Copy constructor
    Employee e3(e2); // Employee e3 = e2;
    e3.get_Data();

    return 0;
}