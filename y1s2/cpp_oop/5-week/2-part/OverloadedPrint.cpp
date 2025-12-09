#include <iostream>
using namespace std;

class Printer {
public:
    void print(int a) {
        cout << a << endl;
    }

    void print(char a) {
        cout << a << endl;
    }

    void print(string a) {
        cout << a << endl;
    }
};

int main() {
    Printer p;
    p.print(5);
    p.print('A');
    p.print("Hello");
    return 0;
}

