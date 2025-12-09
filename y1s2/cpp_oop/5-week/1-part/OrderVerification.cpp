#include <iostream>
using namespace std;

class Order {
public:
    virtual void process_order() {
        cout << "Processing a general order" << endl;
    }
};

class OnlineOrder : public Order {
public:
    void process_order() override {
        cout << "Processing an online order" << endl;
    }
};

class InStoreOrder : public Order {
public:
    void process_order() override {
        cout << "Processing an in-store order" << endl;
    }
};

class PhoneOrder : public Order {
public:
    void process_order() override {
        cout << "Processing a phone order" << endl;
    }
};

int main() {
    OnlineOrder online;
    InStoreOrder store;
    PhoneOrder phone;

    online.process_order();
    store.process_order();
    phone.process_order();

    return 0;
}

