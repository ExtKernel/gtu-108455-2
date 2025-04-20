#include <iostream>
#include <stdexcept>
using namespace std;

class Person {
public:
    void SetAge(int age) {
        if (age < 0) throw invalid_argument("Negative age");
    }
};

int main() {
    int age;
    cin >> age;
    Person p;
    try {
        p.SetAge(age);
    } catch (invalid_argument& e) {
        cout << e.what() << endl;
    }
}

