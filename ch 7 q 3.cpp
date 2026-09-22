### Program

```cpp id="nq4j7k"
#include <iostream>
using namespace std;

// Function template with three different types
template <class T1, class T2, class T3>
double findMax(T1 a, T2 b, T3 c)
{
    // Check for invalid input
    if (a == 0 && b == 0 && c == 0)
    {
        throw "Invalid Input: All values are zero!";
    }

    // Convert all values to double
    double x = static_cast<double>(a);
    double y = static_cast<double>(b);
    double z = static_cast<double>(c);

    double maxValue = x;

    if (y > maxValue)
        maxValue = y;

    if (z > maxValue)
        maxValue = z;

    return maxValue;
}

int main()
{
    try
    {
        int a = 10;
        double b = 25.5;
        float c = 15.5f;

        double result = findMax(a, b, c);

        cout << "Largest value = " << result << endl;
    }
    catch (const char* message)
    {
        cout << "Exception: " << message << endl;
    }

    return 0;
}
