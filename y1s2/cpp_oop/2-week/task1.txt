#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
    
public:
    Person(const std::string& n, int a) : name(n), age(a) {}
};

class Student : public Person {
private:
    int studentID;
    
public:
    Student(const std::string& n, int a, int id) : Person(n, a), studentID(id) {}
    
    void display() {
        std::cout << "Student Details:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Student ID: " << studentID << std::endl;
    }
};

int main() {
    std::cout << "Task N1" << std::endl;
    Student student("Alexander Gamjashvili", 18, 0);
    student.display();
    
    return 0;
}
