#include <iostream>
using namespace std;

// Function template for sorting
template <class T>
void sortArray(T arr[], int n)
{
    T temp;

    // Bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function template for displaying
template <class T>
void displayArray(T arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Integer array
    int intArray[] = {5, 2, 8, 1, 3};

    // Float array
    float floatArray[] = {4.5, 1.2, 3.8, 2.1};

    // Character array
    char charArray[] = {'z', 'b', 'a', 'd', 'c'};

    int n1 = 5;
    int n2 = 4;
    int n3 = 5;

    cout << "Integer array before sorting: ";
    displayArray(intArray, n1);

    sortArray(intArray, n1);

    cout << "Integer array after sorting: ";
    displayArray(intArray, n1);

    cout << "\nFloat array before sorting: ";
    displayArray(floatArray, n2);

    sortArray(floatArray, n2);

    cout << "Float array after sorting: ";
    displayArray(floatArray, n2);

    cout << "\nCharacter array before sorting: ";
    displayArray(charArray, n3);

    sortArray(charArray, n3);

    cout << "Character array after sorting: ";
    displayArray(charArray, n3);

    return 0;
}

