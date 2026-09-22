#include <iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;

public:
    // Function to add two Time objects
    Time addTime(Time t1, Time t2)
    {
        Time temp;

        temp.hours = t1.hours + t2.hours;
        temp.minutes = t1.minutes + t2.minutes;

        // Convert 60 minutes into 1 hour
        if (temp.minutes >= 60)
        {
            temp.hours = temp.hours + temp.minutes / 60;
            temp.minutes = temp.minutes % 60;
        }

        return temp;
    }

    // Function to input time
    void input()
    {
        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;
    }

    // Function to display time
    void display()
    {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time:" << endl;
    t1.input();

    cout << "\nEnter second time:" << endl;
    t2.input();

    // Adding two objects and storing result in third object
    t3 = t3.addTime(t1, t2);

    cout << "\nFirst Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    cout << "Total Time: ";
    t3.display();

    return 0;
}