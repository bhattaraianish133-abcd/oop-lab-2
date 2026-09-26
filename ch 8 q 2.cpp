
#include <iostream>
#include <fstream>
using namespace std;

class Record {
public:
    int id;
    char data[50];
};

int main() {
    Record r;
    fstream file("records.dat", ios::in | ios::out |
                 ios::binary | ios::trunc);

    // Write records
    for (int i = 1; i <= 5; i++) {
        r.id = i;
        cout << "Enter data for ID " << i << ": ";
        cin >> r.data;
        file.write((char*)&r, sizeof(r));
    }

    // Read specific record
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    file.seekg((id - 1) * sizeof(r));
    cout << "Read position: " << file.tellg() << endl;
    file.read((char*)&r, sizeof(r));

    cout << "ID: " << r.id << "\nData: " << r.data << endl;

    // Modify record
    cout << "Enter new data: ";
    cin >> r.data;

    file.seekp((id - 1) * sizeof(r));
    cout << "Write position: " << file.tellp() << endl;
    file.write((char*)&r, sizeof(r));

    file.close();
    return 0;
}