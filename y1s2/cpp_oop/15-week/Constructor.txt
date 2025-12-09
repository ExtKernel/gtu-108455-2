#include <iostream>
using namespace std;

class Student {
    string name;
    int id;
public:
    Student() : name("Unknown"), id(0) {}
    Student(string n, int i) : name(n), id(i) {}

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void enroll() {
        cout << name << " enrolled." << endl;
    }

    void printInfo() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Student s1;           // default constructor
    Student s2("Nino", 23);  // parameterized constructor

    s1.enroll();
    s2.enroll();

    s1.printInfo();
    s2.printInfo();

    return 0;
}
