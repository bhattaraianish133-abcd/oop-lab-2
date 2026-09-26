

#include <iostream>
using namespace std;

// First base class
class Printer
{
public:
    void print()
    {
        cout << "Printing..." << endl;
    }
};

// Second base class
class Scanner
{
public:
    void scan()
    {
        cout << "Scanning..." << endl;
    }
};

// Derived class inheriting from both classes
class AllInOne : public Printer, public Scanner
{
public:
    void doEverything()
    {
        // Explicitly calling functions to avoid ambiguity
        Printer::print();
        Scanner::scan();
    }
};

int main()
{
    AllInOne obj;

    obj.doEverything();

    return 0;
}
