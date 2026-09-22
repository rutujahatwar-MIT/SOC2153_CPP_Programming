#include <iostream>
#include <string>
using namespace std;

class Product {
    int id;
    string name;
    float price;
    int sales[12];
    int total;
    float bill;

public:
    void input() {
        cout << "Enter Product ID: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, name);

        cout << "Enter Price per unit: ";
        cin >> price;

        cout << "Enter monthly sales for 12 months: ";

        total = 0;
        for (int i = 0; i < 12; i++) {
            cin >> sales[i];
            total = total + sales[i];
        }

        bill = total * price;
    }

    void show() {
        cout << "\nProduct ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Total Quantity Sold: " << total << endl;
        cout << "Total Bill: " << bill << endl;
    }

    float getBill() {
        return bill;
    }
};

int main() {
    int n;
    float grandTotal = 0;

    cout << "Enter number of products: ";
    cin >> n;

    Product p[100];

    for (int i = 0; i < n; i++) {
        cout << "\n--- Product " << i + 1 << " Details ---" << endl;

        p[i].input();
        grandTotal = grandTotal + p[i].getBill();
    }

    cout << "\n----- All Products Details -----" << endl;

    for (int i = 0; i < n; i++) {
        p[i].show();
    }

    cout << "\nGrand Total Bill: " << grandTotal << endl;

    return 0;
}