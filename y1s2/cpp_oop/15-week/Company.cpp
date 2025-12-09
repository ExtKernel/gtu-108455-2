#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;
    double salary;

    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}

    virtual void display() {
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary << endl;
    }
};

class Manager : public Employee {
public:
    double bonus;

    Manager(string n, int i, double s, double b) : Employee(n, i, s), bonus(b) {}

    void display() override {
        Employee::display();
        cout << "Bonus: " << bonus << endl;
    }
};

class Engineer : public Employee {
public:
    string specialty;

    Engineer(string n, int i, double s, string sp) : Employee(n, i, s), specialty(sp) {}

    void display() override {
        Employee::display();
        cout << "Specialty: " << specialty << endl;
    }
};

int main() {
    Manager m("Nika", 1, 5000, 1000);
    Engineer e("Tamar", 2, 4000, "Software");

    m.display();
    e.display();

    return 0;
}
