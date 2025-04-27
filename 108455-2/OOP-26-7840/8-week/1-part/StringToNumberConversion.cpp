#include <iostream>
#include <string>
using namespace std;

class Converter {
public:
    int ToInt(const string& s) {
        return stoi(s);
    }
};

int main() {
    string input;
    cin >> input;
    Converter c;
    try {
        cout << c.ToInt(input) << endl;
    } catch (invalid_argument&) {
        cout << "Invalid number" << endl;
    }
}

