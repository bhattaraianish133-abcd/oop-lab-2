### Program

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Abstract base class
class Animal
{
public:
    // Pure virtual function
    virtual void makeSound() = 0;

    // Virtual destructor
    virtual ~Animal()
    {
    }
};

// Derived class Dog
class Dog : public Animal
{
public:
    void makeSound() override
    {
        cout << "Dog says: Woof!" << endl;
    }
};

// Derived class Cat
class Cat : public Animal
{
public:
    void makeSound() override
    {
        cout << "Cat says: Meow!" << endl;
    }
};

int main()
{
    // Vector of base class pointers
    vector<Animal*> animals;

    Dog d;
    Cat c;

    // Pointing base class pointers to derived objects
    animals.push_back(&d);
    animals.push_back(&c);

    // Runtime polymorphism
    for (Animal* a : animals)
    {
        a->makeSound();
    }

    return 0;
}
