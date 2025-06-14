#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <numeric>

using namespace std;

struct Employee {
    string name;
    string title;
};

struct Product {
    int id;
    string name;
    double unitPrice;
};

struct Order {
    int orderId;
    int customerId;
    double freight;
};

struct OrderDetail {
    int orderId;
    int productId;
    int quantity;
};

struct Customer {
    int id;
    string companyName;
};

class AdvancedDatabaseSimulator {
public:
    vector<Employee> employees;
    vector<Product> products;
    vector<Order> orders;
    vector<OrderDetail> orderDetails;
    vector<Customer> customers;

    void deleteInterns() {
        employees.erase(
            remove_if(employees.begin(), employees.end(), [](const Employee& e) {
                return e.title == "Intern";
            }),
            employees.end()
        );
    }

    void showTop5ExpensiveProducts() {
        vector<Product> sorted = products;
        sort(sorted.begin(), sorted.end(), [](const Product& a, const Product& b) {
            return a.unitPrice > b.unitPrice;
        });
        for (size_t i = 0; i < min(sorted.size(), size_t(5)); ++i) {
            cout << sorted[i].name << " " << sorted[i].unitPrice << endl;
        }
    }

    void countOrdersPerCustomer() {
        for (const auto& customer : customers) {
            int count = 0;
            for (const auto& order : orders) {
                if (order.customerId == customer.id) {
                    count++;
                }
            }
            cout << "CustomerID " << customer.id << ": " << count << " orders" << endl;
        }
    }

    void sumQuantityForProduct42() {
        int total = 0;
        for (const auto& od : orderDetails) {
            if (od.productId == 42) {
                total += od.quantity;
            }
        }
        cout << "Total Quantity for ProductID 42: " << total << endl;
    }

    void averageProductPrice() {
        if (products.empty()) return;
        double sum = 0;
        for (const auto& p : products) {
            sum += p.unitPrice;
        }
        cout << fixed << setprecision(2);
        cout << "Average UnitPrice: " << (sum / products.size()) << endl;
    }

    void minMaxFreight() {
        if (orders.empty()) return;
        double minFreight = orders[0].freight;
        double maxFreight = orders[0].freight;
        for (const auto& o : orders) {
            minFreight = min(minFreight, o.freight);
            maxFreight = max(maxFreight, o.freight);
        }
        cout << "MIN Freight: " << minFreight << ", MAX Freight: " << maxFreight << endl;
    }

    void customersStartingWithB() {
        for (const auto& c : customers) {
            if (!c.companyName.empty() && c.companyName[0] == 'B') {
                cout << c.id << " " << c.companyName << endl;
            }
        }
    }
};

int main() {
    AdvancedDatabaseSimulator db;

    db.employees = {
        {"Ana Kapanadze", "Manager"},
        {"Goga Iashvili", "Intern"},
        {"Lika Tavadze", "Sales Representative"},
        {"Nika Tskhakaia", "Intern"}
    };

    db.products = {
        {10, "Saperavi Wine", 45.5},
        {11, "Borjomi Water", 2.2},
        {12, "Georgian Honey", 33.0},
        {13, "Suluguni Cheese", 18.0},
        {14, "Churchkhela", 4.5},
        {15, "Adjika", 3.1}
    };

    db.orders = {
        {301, 1, 15.75},
        {302, 2, 8.30},
        {303, 1, 22.10},
        {304, 3, 5.00}
    };

    db.orderDetails = {
        {301, 42, 5},
        {302, 42, 2},
        {303, 12, 1},
        {304, 42, 3}
    };

    db.customers = {
        {1, "Bagrationi Ltd"},
        {2, "Tbilisi Co"},
        {3, "Batumi Breeze"},
        {4, "Kutaisi Group"}
    };

    db.deleteInterns();
    cout << "--- Top 5 Expensive Products ---" << endl;
    db.showTop5ExpensiveProducts();
    cout << "--- Orders Per Customer ---" << endl;
    db.countOrdersPerCustomer();
    cout << "--- SUM Quantity for ProductID 42 ---" << endl;
    db.sumQuantityForProduct42();
    cout << "--- Average Product Price ---" << endl;
    db.averageProductPrice();
    cout << "--- MIN/MAX Freight ---" << endl;
    db.minMaxFreight();
    cout << "--- Customers Starting with B ---" << endl;
    db.customersStartingWithB();

    return 0;
}
