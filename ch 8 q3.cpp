#include <iostream>
#include <fstream>
using namespace std;

class Inventory {
    string itemName;
    int quantity;

public:
    friend istream& operator>>(istream& in, Inventory& i) {
        in >> i.itemName >> i.quantity;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Inventory& i) {
        out << i.itemName << " " << i.quantity;
        return out;
    }
};

int main() {
    Inventory item;
    fstream file("inventory.dat", ios::in | ios::out |
                 ios::app);

    if (!file.good()) {
        cout << "File opening error!" << endl;
        return 1;
    }

    // Add item
    cout << "Enter item name and quantity: ";
    cin >> item;

    if (cin.fail()) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    file << item << endl;

    // Display items
    file.seekg(0);
    cout << "\nInventory:\n";

    while (file >> item) {
        cout << item << endl;
    }

    if (!file.eof() && file.fail())
        cout << "File reading error!" << endl;

    file.close();

    if (file.fail())
        cout << "File closing error!" << endl;

    return 0;
}