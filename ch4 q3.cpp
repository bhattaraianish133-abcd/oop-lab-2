#include <iostream>
using namespace std;

class FeetInches
{
private:
    int feet;
    int inches;

public:
    // Constructor: Basic type (double) to User-Defined type
    FeetInches(double decimalFeet)
    {
        feet = (int)decimalFeet;
        inches = (int)((decimalFeet - feet) * 12 + 0.5);
        
        // Handle 12 inches
        if (inches >= 12)
        {
            feet++;
            inches = inches - 12;
        }
    }

    // Default constructor
    FeetInches()
    {
        feet = 0;
        inches = 0;
    }

    // User-defined type to Basic type
    // Returns total distance in inches
    operator double()
    {
        return (feet * 12) + inches;
    }

    // Overload + operator
    FeetInches operator+(FeetInches f)
    {
        FeetInches temp;

        temp.feet = feet + f.feet;
        temp.inches = inches + f.inches;

        if (temp.inches >= 12)
        {
            temp.feet++;
            temp.inches -= 12;
        }

        return temp;
    }

    void display()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main()
{
    // Basic to User-Defined conversion
    double d1 = 5.75;

    FeetInches f1 = d1;

    cout << "Decimal feet: " << d1 << endl;
    cout << "Converted to Feet-Inches: ";
    f1.display();

    // Another object
    FeetInches f2 = 3.50;

    cout << "\nSecond distance: ";
    f2.display();

    // User-Defined to Basic conversion
    double totalInches = f1;

    cout << "\nTotal inches in first distance: "
         << totalInches << " inches" << endl;

    // Addition of two objects
    FeetInches f3 = f1 + f2;

    cout << "\nAddition of two distances: ";
    f3.display();

    return 0;
}