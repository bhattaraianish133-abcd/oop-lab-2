
#include <iostream>
using namespace std;

// Base class
class Shape
{
protected:
    double width, height;

public:
    void setDimensions(double w, double h)
    {
        width = w;
        height = h;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
public:
    double area()
    {
        return width * height;
    }
};

// Derived class Triangle
class Triangle : public Shape
{
public:
    double area()
    {
        return 0.5 * width * height;
    }
};

int main()
{
    Rectangle r;
    r.setDimensions(10, 5);

    cout << "Area of Rectangle = " << r.area() << endl;

    Triangle t;
    t.setDimensions(10, 5);

    cout << "Area of Triangle = " << t.area() << endl;

    return 0;
}
