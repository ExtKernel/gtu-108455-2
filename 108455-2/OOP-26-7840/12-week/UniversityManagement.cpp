#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
protected:
    string name;
    string id;

public:
    Person(const string& name, const string& id) : name(name), id(id) {}
    virtual void display() const {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
    virtual ~Person() {}
};

class Student : public Person {
private:
    double gpa;
    string level;

public:
    Student(const string& name, const string& id, double gpa, const string& level)
        : Person(name, id), gpa(gpa), level(level) {}

    double calculateScholarship() const {
        if (gpa >= 3.5) return 1000.0;
        if (gpa >= 3.0) return 500.0;
        return 0.0;
    }

    void display() const override {
        Person::display();
        cout << "GPA: " << gpa << ", Level: " << level
             << ", Scholarship: $" << calculateScholarship() << endl;
    }
};

class Lecturer : public Person {
private:
    double salary;
    string degree;

public:
    Lecturer(const string& name, const string& id, double salary, const string& degree)
        : Person(name, id), salary(salary), degree(degree) {}

    double calculateTax() const {
        return salary * 0.2;
    }

    void display() const override {
        Person::display();
        cout << "Salary: $" << salary << ", Degree: " << degree
             << ", Tax: $" << calculateTax() << endl;
    }
};

int main() {
    vector<Person*> people;

    people.push_back(new Student("Ana", "S001", 3.6, "Bachelor"));
    people.push_back(new Student("Giorgi", "S002", 2.9, "Master"));
    people.push_back(new Lecturer("Nino", "L001", 3000, "PhD"));
    people.push_back(new Lecturer("David", "L002", 2500, "Professor"));

    for (const auto& person : people) {
        person->display();
        cout << "--------------------------" << endl;
    }

    for (auto& person : people) {
        delete person;
    }

    return 0;
}

