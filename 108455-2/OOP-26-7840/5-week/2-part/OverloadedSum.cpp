#include <iostream>
using namespace std;

class Math {
public:
    int sum(int a, int b) {
        return a + b;
    }

    double sum(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << m.sum(3, 4) << endl;
    cout << m.sum(3.5, 4.5) << endl;
    return 0;
}

