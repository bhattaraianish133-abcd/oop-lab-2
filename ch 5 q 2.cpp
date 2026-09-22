
#include <iostream>
#include <vector>
using namespace std;

// Base class
class Employee
{
protected:
    string name;
    int id;

public:
    // Constructor
    Employee(string n, int i)
    {
        name = n;
        id = i;
        cout << "Employee Constructor Called" << endl;
    }

    // Destructor
    virtual ~Employee()
    {
        cout << "Employee Destructor Called" << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

// Derived class
class Manager : public Employee
{
private:
    string department;

public:
    // Constructor chaining
    Manager(string n, int i, string d)
        : Employee(n, i)
    {
        department = d;
        cout << "Manager Constructor Called" << endl;
    }

    // Destructor
    ~Manager()
    {
        cout << "Manager Destructor Called" << endl;
    }

    void display()
    {
        Employee::display();
        cout << "Department: " << department << endl;
    }
};

// Aggregation class
class Department
{
private:
    vector<Employee*> employees;

public:
    // Add employee
    void addEmployee(Employee* e)
    {
        employees.push_back(e);
    }

    // Display employees
    void listEmployees()
    {
        cout << "\nEmployees in Department:" << endl;

        for (Employee* e : employees)
        {
            e->display();
            cout << endl;
        }
    }
};

int main()
{
    Manager m1("Anish", 101, "IT");
    Manager m2("Ram", 102, "HR");

    Department d;

    // Aggregation: Department contains pointers
    d.addEmployee(&m1);
    d.addEmployee(&m2);

    d.listEmployees();

    return 0;
}
