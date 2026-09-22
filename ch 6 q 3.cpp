### Program

```cpp
#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Virtual destructor
    virtual ~Base()
    {
        cout << "Base Destructor Called" << endl;
    }

    // Function using this pointer
    Base& getObject()
    {
        return *this;
    }

    void show()
    {
        cout << "Base class function called." << endl;
    }
};

// Derived class
class Derived : public Base
{
private:
    int* data;

public:
    // Constructor
    Derived()
    {
        data = new int(100);
        cout << "Derived Constructor Called" << endl;
    }

    // Derived destructor
    ~Derived()
    {
        delete data;
        cout << "Derived Destructor Called" << endl;
    }
};

int main()
{
    cout << "Creating Derived object:" << endl;

    Base* ptr = new Derived();

    cout << "\nDeleting through Base pointer:" << endl;
    delete ptr;

    cout << "\nTesting this pointer:" << endl;

    Base obj;
    Base& ref = obj.getObject();

    ref.show();

    return 0;
}
