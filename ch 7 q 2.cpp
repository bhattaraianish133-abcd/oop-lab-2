### Program

```cpp id="x8v3kp"
#include <iostream>
using namespace std;

// Class template
template <class T>
class Stack
{
private:
    T arr[5];
    int top;

public:
    // Constructor
    Stack()
    {
        top = -1;
    }

    // Push operation
    void push(T value)
    {
        if (top == 4)
        {
            throw "Stack Overflow: Stack is full!";
        }

        arr[++top] = value;
        cout << value << " pushed into stack." << endl;
    }

    // Pop operation
    T pop()
    {
        if (top == -1)
        {
            throw "Stack Underflow: Stack is empty!";
        }

        return arr[top--];
    }

    // Display operation
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements: ";

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Stack<int> s;

    try
    {
        // Push elements
        s.push(10);
        s.push(20);
        s.push(30);

        s.display();

        // Pop element
        cout << "Popped element: " << s.pop() << endl;

        s.display();

        // Empty the stack
        s.pop();
        s.pop();

        // This will cause underflow
        cout << "Popped element: " << s.pop() << endl;
    }
    catch (const char* message)
    {
        cout << "Exception: " << message << endl;
    }

    return 0;
}
 