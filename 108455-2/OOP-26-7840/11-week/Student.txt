#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    int age;

public:
    Person(string fn, string ln, int a) : firstName(fn), lastName(ln), age(a) {}

    void setFirstName(string fn) { firstName = fn; }
    void setLastName(string ln) { lastName = ln; }
    void setAge(int a) { age = a; }

    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    int getAge() const { return age; }

    virtual void display() const {
        cout << "First Name: " << firstName << ", Last Name: " << lastName << ", Age: " << age << endl;
    }

    virtual ~Person() {}
};

class Student : public Person {
private:
    string studentId;

public:
    Student(string fn, string ln, int a, string id) : Person(fn, ln, a), studentId(id) {}

    void display() const override {
        Person::display();
        cout << "Student ID: " << studentId << endl;
    }
};

int main() {
    Student s("Mikheil", "Kebadze", 26, "MK2025");
    s.display();
    return 0;
}

