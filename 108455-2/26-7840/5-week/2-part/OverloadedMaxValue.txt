#include <iostream>
using namespace std;

class Comparator {
public:
    int maxValue(int a, int b) {
        return (a > b) ? a : b;
    }

    float maxValue(float a, float b) {
        return (a > b) ? a : b;
    }

    int maxValue(int a, int b, int c) {
        return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    }
};

int main() {
    Comparator c;
    cout << c.maxValue(5, 10) << endl;
    cout << c.maxValue(3.5f, 2.5f) << endl;
    cout << c.maxValue(3, 7, 5) << endl;
    return 0;
}

