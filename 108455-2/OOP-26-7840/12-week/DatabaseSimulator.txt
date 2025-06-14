#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Customer {
    int id;
    string name;
    string country;
};

struct Product {
    string productName;
    double unitPrice;
};

struct Order {
    int orderId;
    string orderDate;
    string shipCountry;
};

struct Employee {
    string name;
    string city;
    string title;
};

class DatabaseSimulator {
public:
    vector<Customer> customers;
    vector<Product> products;
    vector<Order> orders;
    vector<Employee> employees;

    void selectAllCustomers() {
        for (const auto& c : customers) {
            cout << c.id << " " << c.name << " " << c.country << endl;
        }
    }

    void selectDistinctCustomerCountries() {
        vector<string> countries;
        for (const auto& c : customers) {
            if (find(countries.begin(), countries.end(), c.country) == countries.end()) {
                countries.push_back(c.country);
                cout << c.country << endl;
            }
        }
    }

    void selectProductsWithHighPrice() {
        for (const auto& p : products) {
            if (p.unitPrice > 30.0) {
                cout << p.productName << " " << p.unitPrice << endl;
            }
        }
    }

    void selectOrdersToFrance() {
        vector<Order> result;
        for (const auto& o : orders) {
            if (o.shipCountry == "France") {
                result.push_back(o);
            }
        }
        sort(result.begin(), result.end(), [](const Order& a, const Order& b) {
            return a.orderDate < b.orderDate;
        });
        for (const auto& o : result) {
            cout << o.orderId << " " << o.orderDate << " " << o.shipCountry << endl;
        }
    }

    void selectSalesRepsInLondon() {
        for (const auto& e : employees) {
            if (e.city == "London" && e.title == "Sales Representative") {
                cout << e.name << " " << e.city << " " << e.title << endl;
            }
        }
    }
};

int main() {
    DatabaseSimulator db;

    db.customers = {
        {1, "Nino Beridze", "Georgia"},
        {2, "Giorgi Lomidze", "Germany"},
        {3, "Tamar Kapanadze", "Georgia"},
        {4, "Lasha Khutsishvili", "France"}
    };

    db.products = {
        {"Borjomi Mineral Water", 5.5},
        {"Sulguni Cheese", 18.0},
        {"Khinkali Maker", 75.0},
        {"Georgian Wine", 45.0}
    };

    db.orders = {
        {201, "2025-03-01", "France"},
        {202, "2025-02-15", "Georgia"},
        {203, "2025-03-20", "France"}
    };

    db.employees = {
        {"Natia Gelashvili", "London", "Sales Representative"},
        {"Irakli Machavariani", "Tbilisi", "Manager"},
        {"Salome Javakhishvili", "London", "Sales Representative"}
    };

    db.selectAllCustomers();
    cout << "---" << endl;
    db.selectDistinctCustomerCountries();
    cout << "---" << endl;
    db.selectProductsWithHighPrice();
    cout << "---" << endl;
    db.selectOrdersToFrance();
    cout << "---" << endl;
    db.selectSalesRepsInLondon();

    return 0;
}
