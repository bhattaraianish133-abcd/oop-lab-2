#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

    // Static data member
    static int studentCount;

public:
    // Constructor
    Student()
    {
        studentCount++;
    }

    // Destructor
    ~Student()
    {
        studentCount--;
    }

    // Input function
    void input()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter name: ";
        cin >> name;
    }

    // Display function
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Static member function
    static int getCount()
    {
        return studentCount;
    }
};

// Definition of static data member
int Student::studentCount = 0;

int main()
{
    // Calling static function without creating an object
    cout << "Initial student count: "
         << Student::getCount() << endl;

    Student s1;

    cout << "After creating s1: "
         << Student::getCount() << endl;

    Student s2;

    cout << "After creating s2: "
         << Student::getCount() << endl;

    Student s3;

    cout << "After creating s3: "
         << Student::getCount() << endl;

    // Input student information
    cout << "\nEnter details of Student 1:\n";
    s1.input();

    cout << "\nEnter details of Student 2:\n";
    s2.input();

    cout << "\nEnter details of Student 3:\n";
    s3.input();

    cout << "\nStudent 1:\n";
    s1.display();

    cout << "\nStudent 2:\n";
    s2.display();

    cout << "\nStudent 3:\n";
    s3.display();

    {
        Student s4;

        cout << "\nAfter creating s4: "
             << Student::getCount() << endl;
    }

    // s4 is destroyed here
    cout << "After s4 is destroyed: "
         << Student::getCount() << endl;

    return 0;
}