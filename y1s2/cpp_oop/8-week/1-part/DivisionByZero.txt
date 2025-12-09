#include <iostream>
using namespace std;

class Divider {
public:
    double Divide(double a, double b) {
        if (b == 0) throw runtime_error("Division by zero");
        return a / b;
    }
};

int main() {
    Divider d;
    try {
        cout << d.Divide(10, 0) << endl;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}

