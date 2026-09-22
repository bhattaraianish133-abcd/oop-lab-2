#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    string ISBN;
    float price;

public:
    // Default constructor
    Book()
    {
        title = "Unknown";
        author = "Anonymous";
        ISBN = "N/A";
        price = 0.0;
    }

    // Parameterized constructor
    Book(string t, string a, string i, float p)
    {
        title = t;
        author = a;
        ISBN = i;
        price = p;
    }

    // Copy constructor
    Book(const Book &b)
    {
        title = b.title;
        author = b.author;
        ISBN = b.ISBN;
        price = b.price;
    }

    // Getters
    string getTitle()
    {
        return title;
    }

    string getAuthor()
    {
        return author;
    }

    string getISBN()
    {
        return ISBN;
    }

    float getPrice()
    {
        return price;
    }

    // Setters
    void setTitle(string t)
    {
        title = t;
    }

    void setAuthor(string a)
    {
        author = a;
    }

    void setISBN(string i)
    {
        ISBN = i;
    }

    void setPrice(float p)
    {
        price = p;
    }
};

// Function accepting object as argument
void displayBook(Book b)
{
    cout << "Title  : " << b.getTitle() << endl;
    cout << "Author : " << b.getAuthor() << endl;
    cout << "ISBN   : " << b.getISBN() << endl;
    cout << "Price  : Rs. " << b.getPrice() << endl;
}

int main()
{
    // Object using default constructor
    Book b1;

    // Object using parameterized constructor
    Book b2("C++ Programming", "Bjarne Stroustrup",
            "9780321563842", 850.50);

    // Object using copy constructor
    Book b3(b2);

    cout << "Book 1 - Default Constructor" << endl;
    displayBook(b1);

    cout << "\nBook 2 - Parameterized Constructor" << endl;
    displayBook(b2);

    cout << "\nBook 3 - Copy Constructor" << endl;
    displayBook(b3);

    // Demonstrating setter
    b1.setTitle("OOP with C++");
    b1.setAuthor("John Smith");
    b1.setISBN("123456789");
    b1.setPrice(600.00);

    cout << "\nBook 1 after using Setter Functions" << endl;
    displayBook(b1);

    return 0;
}