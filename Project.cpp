#include <iostream>
#include <string>

using namespace std;

class InventoryItem {
private:
    string itemName;
    int itemQuantity;
    double itemPrice;

public:
    InventoryItem(const string& name, int quantity, double price)
        : itemName(name), itemQuantity(quantity), itemPrice(price) {}

    void addItem(int quantity) {
        itemQuantity += quantity;
        cout << "Added " << quantity << " items. Total quantity: " << itemQuantity << endl;
    }

    void removeItem(int quantity) {
        if (itemQuantity >= quantity) {
            itemQuantity -= quantity;
            cout << "Removed " << quantity << " items. Total quantity: " << itemQuantity << endl;
        } else {
            cout << "Insufficient quantity. Removal failed." << endl;
        }
    }
