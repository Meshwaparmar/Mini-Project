#include <iostream>
#include <string>

using namespace std;

class InventoryItem {
private:
    int itemName;
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

    void updatePrice(double price) {
        itemPrice = price;
        cout << "Price updated. New price: " << itemPrice << endl;
    }

    void displayItem() const {
        cout << "Item: " << itemName << endl;
        cout << "Quantity: " << itemQuantity << endl;
        cout << "Price: " << itemPrice << endl;
    }
};

int main() {
    string name;
    int quantity;
    double price;

    cout << "Enter item name: ";
    getline(cin, name);

    cout << "Enter initial quantity: ";
    cin >> quantity;

    cout << "Enter initial price: ";
    cin >> price;

    InventoryItem item(name, quantity, price);

    cout << "Initial inventory item:" << endl;
    item.displayItem();

    int addQuantity, removeQuantity;
    double newPrice;

    cout << "Enter quantity to add: ";
    cin >> addQuantity;
    item.addItem(addQuantity);

    cout << "Enter quantity to remove: ";
    cin >> removeQuantity;
    item.removeItem(removeQuantity);

    cout << "Enter new price: ";
    cin >> newPrice;
    item.updatePrice(newPrice);

    cout << "Final inventory item:" << endl;
    item.displayItem();

    return 0;
}
