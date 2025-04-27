#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
protected:
    void SetName(string n) { name = n; }
    void SetAge(int a) { age = a; }
    string GetName() { return name; }
    int GetAge() { return age; }
};

class Student : public Person {
    double gpa;
public:
    Student(string n, int a, double g) {
        SetName(n);
        SetAge(a);
        gpa = g;
    }
    void PrintInfo() {
        cout << GetName() << " " << GetAge() << " " << gpa << endl;
    }
};

int main() {
    Student s("Alice", 20, 3.8);
    s.PrintInfo();
}

