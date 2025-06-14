#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Customer {
public:
    string customerID;
    string companyName;
    string country;
};

class Product {
public:
    string productName;
    double unitPrice;
    bool discontinued;
};

class Shipper {
public:
    string companyName;
    string phone;
};

class Supplier {
public:
    string companyName;
    string region;
};

class DataMaintenance {
    vector<Customer> customers;
    vector<Product> products;
    vector<Shipper> shippers;
    vector<Supplier> suppliers;

public:
    DataMaintenance() {
        customers = {
            {"C001", "Sakartvelo Ltd", "Georgia"},
            {"C002", "Rio Traders", "Brazil"},
            {"C003", "Buenos Aires Group", "Argentina"},
            {"C004", "Tbilisi Market", "Georgia"}
        };

        products = {
            {"Sulguni", 15.0, false},
            {"Imeruli", 10.0, false},
            {"Chang", 19.0, true},
            {"Borjomi", 5.0, false}
        };

        shippers = {
            {"Georgian Post", "555-0001"},
            {"Tbilisi Express", "555-0002"}
        };

        suppliers = {
            {"Tbilisi Supplies", "Kakheti"},
            {"Rio Export", ""},
            {"Argentine Food Co", ""},
            {"Batumi Wholesale", "Adjara"}
        };
    }

    void findCustomersInBrazilOrArgentina() {
        for (auto& c : customers) {
            if (c.country == "Brazil" || c.country == "Argentina") {
                cout << c.customerID << " - " << c.companyName << " (" << c.country << ")" << endl;
            }
        }
    }

    void selectNotDiscontinuedProducts() {
        for (auto& p : products) {
            if (!p.discontinued) {
                cout << p.productName << " - lari" << p.unitPrice << endl;
            }
        }
    }

    void insertShipper() {
        Shipper s = {"Speedy Express", "555-0199"};
        shippers.push_back(s);
        cout << "Inserted Shipper: " << s.companyName << ", Phone: " << s.phone << endl;
    }

    void findSuppliersWithNullRegion() {
        for (auto& s : suppliers) {
            if (s.region.empty()) {
                cout << s.companyName << " - Region: NULL" << endl;
            }
        }
    }

    void updateChangPrice() {
        for (auto& p : products) {
            if (p.productName == "Chang") {
                p.unitPrice = 25.00;
                cout << "Updated 'Chang' price to lari" << fixed << setprecision(2) << p.unitPrice << endl;
            }
        }
    }
};

int main() {
    DataMaintenance db;

    cout << "\nCustomers in Brazil or Argentina:\n";
    db.findCustomersInBrazilOrArgentina();

    cout << "\nAvailable (not discontinued) products:\n";
    db.selectNotDiscontinuedProducts();

    cout << "\nInserting new shipper:\n";
    db.insertShipper();

    cout << "\nSuppliers with NULL region:\n";
    db.findSuppliersWithNullRegion();

    cout << "\nUpdating price for 'Chang':\n";
    db.updateChangPrice();

    return 0;
}
