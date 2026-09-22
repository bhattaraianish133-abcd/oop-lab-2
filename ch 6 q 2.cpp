### Program

```cpp id="m4j2xq"
#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[2][2];

    // Static data member
    static int count;

public:
    // Constructor
    Matrix()
    {
        count++;
    }

    // Function to input matrix
    void input()
    {
        cout << "Enter 4 elements: ";

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    // Display function
    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Static member function
    static void showCount()
    {
        cout << "Number of Matrix objects created = "
             << count << endl;
    }

    // Friend function
    friend Matrix multiplyMatrices(Matrix m1, Matrix m2);
};

// Initialize static data member
int Matrix::count = 0;

// Friend function for matrix multiplication
Matrix multiplyMatrices(Matrix m1, Matrix m2)
{
    Matrix result;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result.a[i][j] = 0;

            for (int k = 0; k < 2; k++)
            {
                result.a[i][j] += m1.a[i][k] * m2.a[k][j];
            }
        }
    }

    return result;
}

int main()
{
    Matrix m1, m2, result;

    cout << "Enter first matrix:" << endl;
    m1.input();

    cout << "Enter second matrix:" << endl;
    m2.input();

    cout << "\nFirst Matrix:" << endl;
    m1.display();

    cout << "\nSecond Matrix:" << endl;
    m2.display();

    // Calling friend function
    result = multiplyMatrices(m1, m2);

    cout << "\nResult of multiplication:" << endl;
    result.display();

    // Calling static member function
    Matrix::showCount();

    return 0;
}
