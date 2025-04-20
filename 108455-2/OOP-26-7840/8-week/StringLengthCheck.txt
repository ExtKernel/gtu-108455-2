#include <iostream>
#include <stdexcept>
using namespace std;

class StringChecker {
public:
    void Validate(const string& s) {
        if (s.empty()) throw runtime_error("Enter a non-empty text");
    }
};

int main() {
    string s;
    getline(cin, s);
    StringChecker checker;
    try {
        checker.Validate(s);
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}

