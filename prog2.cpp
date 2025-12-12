#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    float salary;
    string designation;

public:
    
    void setName(string n)
     {
        name = n;
    }

    void setSalary(float s) 
    {
        salary = s;
    }

    void setDesignation(string d)
     {
        designation = d;
    }

    
    string getName() 
    
    {
        return name;
    }

    float getSalary() {
        return salary;
    }

    string getDesignation() {
        return designation;
    }
};

int main() 
{
    Employee emp;
    string n, d;
    float s;

    cout << "Enter your Name: ";
    getline(cin, n);
    emp.setName(n);

    cout << "Enter Salary: ";
    cin >> s;
    emp.setSalary(s);

    cin.ignore(); 

    cout << "Enter Designation: ";
    getline(cin, d);
    emp.setDesignation(d);

    cout << "\n--- Employee Details ---\n";
    cout << "Name: " << emp.getName() << endl;
    cout << "Salary: " << emp.getSalary() << endl;
    cout << "Designation: " << emp.getDesignation() << endl;

    return 0;
}
