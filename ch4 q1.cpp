
#include <iostream>
using namespace std;

class Counter
{
private:
    int value;

public:
    // Constructor
    Counter(int v = 0)
    {
        value = v;
    }

    // Prefix increment (++c)
    Counter& operator++()
    {
        ++value;
        return *this;
    }

    // Postfix increment (c++)
    Counter operator++(int)
    {
        Counter temp = *this;
        value++;
        return temp;
    }

    // Prefix decrement (--c)
    Counter& operator--()
    {
        --value;
        return *this;
    }

    // Postfix decrement (c--)
    Counter operator--(int)
    {
        Counter temp = *this;
        value--;
        return temp;
    }

    // Display function
    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Counter c(5);
    Counter result;

    cout << "Initial value:" << endl;
    c.display();

    // Prefix increment
    cout << "\nAfter prefix increment (++c):" << endl;
    ++c;
    c.display();

    // Postfix increment
    cout << "\nAfter postfix increment (c++):" << endl;
    result = c++;
    cout << "Returned original value: ";
    result.display();
    cout << "Current value: ";
    c.display();

    // Prefix decrement
    cout << "\nAfter prefix decrement (--c):" << endl;
    --c;
    c.display();

    // Postfix decrement
    cout << "\nAfter postfix decrement (c--):" << endl;
    result = c--;
    cout << "Returned original value: ";
    result.display();
    cout << "Current value: ";
    c.display();

    return 0;
}