#include <iostream>
#include <string>

using namespace std;

class InventoryItem {
private:
    string itemName;
    int itemQty;
    double itemprice;

public:
    InventoryItem(const string& name, int Qty, double price)
        : itemName(name), itemQty(Qty), itemPrice(price) {}

    void addItem(int Qty) {
        itemQty += Qty;
        cout << "Added " << Qty << " items. Total Quantity: " << itemQty << endl;
    }

    void removeItem(int Qty) {
        if (itemQty >= Qty) {
            itemQty -= Qty;
            cout << "Removed " << Qty << " items. Total Quantity: " << itemqty << endl;
        } else {
            cout << "Insufficient Quantity. Removal failed." << endl;
        }
    }
 void updatePrice(double price) {
        itemPrice = price;
        cout << "Price updated. New price: " << itemPrice << endl;
    }

    void displayItem() const {
        cout << "Item: " << itemName << endl;
        cout << "Quantity: " << itemQty << endl;
        cout << "Price: " << itemPrice << endl;
    }
};

int main() {
    string name;
    int Qty;
    double price;

    cout << "Enter item name: ";
    getline(cin, name);

    cout << "Enter initial Quantity: ";
    cin >> Qty;

    cout << "Enter initial price: ";
    cin >> price;

    
    InventoryItem item(name, Qty, price);

    cout << "Initial inventory item:" << endl;
    item.displayItem();

    int addQty, removeQty;
    double newPrice;

    cout << "Enter Quantity to add: ";
    cin >> addQty;
    item.addItem(addQty);

    cout << "Enter Quantity to remove: ";
    cin >> removeQty;
    item.removeItem(removeQty);

   cout << "Enter new price: ";
    cin >> newPrice;
    item.updatePrice(newPrice);

    cout << "Final inventory item:" << endl;
    item.displayItem();

    return 0;

}
