#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <ctime>
#include <iomanip>

using namespace std;

struct Product {
    int id;
    string name;
    double unitPrice;
    int supplierId;
    int categoryId;
};

struct Order {
    int orderId;
    string orderDate;
    string customerId;
    int employeeId;
    int shipVia;
    double freight;
};

struct Employee {
    int id;
    string hireDate;
};

struct OrderDetail {
    int orderId;
    double unitPrice;
    int quantity;
};

class QuerySimulation {
public:
    vector<Product> products;
    vector<Order> orders;
    vector<Employee> employees;
    vector<OrderDetail> orderDetails;

    void productsWithCheese() {
        for (const auto& p : products) {
            string lower = toLower(p.name);
            if (lower.find("cheese") != string::npos) {
                cout << p.id << " " << p.name << endl;
            }
        }
    }

    void sumFreight1997() {
        double sum = 0;
        for (const auto& o : orders) {
            if (o.orderDate.substr(0, 4) == "1997") {
                sum += o.freight;
            }
        }
        cout << "Total Freight in 1997: " << sum << endl;
    }

    void countEmployeesHiredAfter() {
        int count = 0;
        for (const auto& e : employees) {
            if (e.hireDate > "1998-01-01") {
                count++;
            }
        }
        cout << "Employees hired after 1998-01-01: " << count << endl;
    }

    void showLatest10Orders() {
        vector<Order> sorted = orders;
        sort(sorted.begin(), sorted.end(), [](const Order& a, const Order& b) {
            return a.orderId > b.orderId;
        });
        for (size_t i = 0; i < min(size_t(10), sorted.size()); ++i) {
            cout << sorted[i].orderId << " " << sorted[i].orderDate << endl;
        }
    }

    void countProductsPerSupplier() {
        vector<int> supplierIds;
        for (const auto& p : products) {
            if (find(supplierIds.begin(), supplierIds.end(), p.supplierId) == supplierIds.end()) {
                supplierIds.push_back(p.supplierId);
            }
        }
        for (int supplierId : supplierIds) {
            int count = count_if(products.begin(), products.end(), [&](const Product& p) {
                return p.supplierId == supplierId;
            });
            cout << "SupplierID " << supplierId << ": " << count << " products" << endl;
        }
    }

    void avgPricePerCategory() {
        vector<int> categoryIds;
        for (const auto& p : products) {
            if (find(categoryIds.begin(), categoryIds.end(), p.categoryId) == categoryIds.end()) {
                categoryIds.push_back(p.categoryId);
            }
        }
        for (int categoryId : categoryIds) {
            double sum = 0;
            int count = 0;
            for (const auto& p : products) {
                if (p.categoryId == categoryId) {
                    sum += p.unitPrice;
                    count++;
                }
            }
            cout << "CategoryID " << categoryId << ": Avg UnitPrice = "
                 << (count ? sum / count : 0) << endl;
        }
    }

    void orderTotalsOver2000() {
        vector<int> orderIds;
        for (const auto& od : orderDetails) {
            if (find(orderIds.begin(), orderIds.end(), od.orderId) == orderIds.end()) {
                orderIds.push_back(od.orderId);
            }
        }
        for (int orderId : orderIds) {
            double total = 0;
            for (const auto& od : orderDetails) {
                if (od.orderId == orderId) {
                    total += od.unitPrice * od.quantity;
                }
            }
            if (total > 2000.0) {
                cout << "OrderID " << orderId << ": Total = " << total << endl;
            }
        }
    }

    void insertNewOrder() {
        time_t now = time(nullptr);
        tm* local = localtime(&now);
        char buf[11];
        strftime(buf, sizeof(buf), "%Y-%m-%d", local);
        string today(buf);

        int newOrderId = getNextOrderId();
        orders.push_back({newOrderId, today, "ALFKI", 5, 1, 20.00});
        cout << "New Order Inserted: OrderID = " << newOrderId << ", Date = " << today << endl;
    }

private:
    string toLower(const string& str) {
        string result = str;
        transform(result.begin(), result.end(), result.begin(), ::tolower);
        return result;
    }

    int getNextOrderId() {
        int maxId = 0;
        for (const auto& o : orders) {
            if (o.orderId > maxId) {
                maxId = o.orderId;
            }
        }
        return maxId + 1;
    }
};

int main() {
    QuerySimulation db;

    db.products = {
        {1, "Suluguni Cheese", 18.5, 101, 1},
        {2, "Imeruli Cheese", 22.0, 101, 1},
        {3, "Khinkali", 6.0, 102, 2},
        {4, "Matsoni", 4.0, 103, 2}
    };

    db.orders = {
        {201, "1997-03-15", "A001", 1, 1, 10.0},
        {202, "1997-06-20", "B002", 2, 2, 20.0},
        {203, "1998-01-10", "C003", 3, 1, 15.0},
        {204, "1999-05-22", "D004", 4, 2, 30.0}
    };

    db.employees = {
        {1, "1996-04-10"},
        {2, "1998-03-01"},
        {3, "1999-06-15"}
    };

    db.orderDetails = {
        {201, 1, 50},
        {202, 1, 20},
        {203, 2, 40},
        {204, 2, 100},
        {204, 3, 100}
    };

    db.productsWithCheese();
    cout << "---" << endl;
    db.sumFreight1997();
    cout << "---" << endl;
    db.countEmployeesHiredAfter();
    cout << "---" << endl;
    db.showLatest10Orders();
    cout << "---" << endl;
    db.countProductsPerSupplier();
    cout << "---" << endl;
    db.avgPricePerCategory();
    cout << "---" << endl;
    db.orderTotalsOver2000();
    cout << "---" << endl;
    db.insertNewOrder();

    return 0;
}
