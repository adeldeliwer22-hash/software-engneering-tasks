#include using namespace std;

class Product { private: int id; double price;

public: Product() { id = 0; price = 0.0; }

void inputData() {
    cout << "Enter product ID: ";
    cin >> id;
    cout << "Enter product price: ";
    cin >> price;
}

void applyDiscount(double percent) {
    price = price - (price * percent / 100);
}

void displayInfo() {
    cout << "\n--- Product Information ---" << endl;
    cout << "Product ID: " << id << endl;
    cout << "Price: " << price << " $" << endl;
}
};

int main() { Product p1; double discount;

p1.inputData();

cout << "Enter discount percentage: ";
cin >> discount;

cout << "\nBefore discount:" << endl;
p1.displayInfo();


p1.applyDiscount(discount);

cout << "\nAfter applying " << discount << "% discount:" << endl;
p1.displayInfo();

return 0;
}
