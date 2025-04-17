#include <iostream>
#include <fstream>
using namespace std;

class Student {
    string name;
    int grade;
public:
    Student(const string& n, int g) : name(n), grade(g) {}
    void SaveToFile() {
        ofstream file("students.txt", ios::app);
        file << name << " " << grade << endl;
    }
    static void ReadAll() {
        ifstream file("students.txt");
        string n;
        int g;
        while (file >> n >> g) {
            cout << n << " " << g << endl;
        }
    }
};

int main() {
    Student s1("Anna", 85);
    Student s2("Ben", 92);
    Student s3("Clara", 78);
    s1.SaveToFile();
    s2.SaveToFile();
    s3.SaveToFile();
    Student::ReadAll();
}

