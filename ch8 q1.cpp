### Program

```cpp
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string name;
    int roll;
    float m1, m2, m3;

    // Open file for writing
    ofstream fout("students.txt");

    if (!fout)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Input details of 5 students
    for (int i = 1; i <= 5; i++)
    {
        cout << "\nEnter details of Student " << i << endl;

        cout << "Name: ";
        cin >> name;

        cout << "Roll Number: ";
        cin >> roll;

        cout << "Marks in three subjects: ";
        cin >> m1 >> m2 >> m3;

        // Write formatted data to file
        fout << left << setw(15) << name
             << setw(10) << roll
             << setw(10) << m1
             << setw(10) << m2
             << setw(10) << m3 << endl;
    }

    fout.close();

    // Open file for reading
    ifstream fin("students.txt");

    if (!fin)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "\n-----------------------------------------------" << endl;
    cout << left << setw(15) << "Name"
         << setw(10) << "Roll"
         << setw(10) << "Mark1"
         << setw(10) << "Mark2"
         << setw(10) << "Mark3"
         << setw(10) << "Total"
         << setw(10) << "Average" << endl;

    cout << "-----------------------------------------------" << endl;

    // Read data from file
    while (fin >> name >> roll >> m1 >> m2 >> m3)
    {
        float total = m1 + m2 + m3;
        float average = total / 3;

        cout << left << setw(15) << name
             << setw(10) << roll
             << setw(10) << m1
             << setw(10) << m2
             << setw(10) << m3
             << setw(10) << total
             << fixed << setprecision(2) << average << endl;
    }

    fin.close();

    return 0;
}
