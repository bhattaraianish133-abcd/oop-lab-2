#include <iostream>
#include <iomanip>
using namespace std;

void swapAndRound(double &a, double &b)
{
    // Add 0.5 to each value
    a = a + 0.5;
    b = b + 0.5;

    // Swap the values
    double temp = a;
    a = b;
    b = temp;
}

int main()
{
    double x = 10.25;
    double y = 20.75;

    cout << fixed << setprecision(2);

    cout << "Before calling function:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swapAndRound(x, y);

    cout << "\nAfter calling function:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}