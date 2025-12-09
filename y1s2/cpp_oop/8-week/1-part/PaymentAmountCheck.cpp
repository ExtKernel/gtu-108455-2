#include <iostream>
using namespace std;

class PaymentProcessor {
public:
    void Pay(double amount) {
        if (amount < 0) throw runtime_error("Amount cannot be negative");
        cout << "Payment accepted" << endl;
    }
};

int main() {
    double amount;
    cin >> amount;
    PaymentProcessor p;
    try {
        p.Pay(amount);
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}

