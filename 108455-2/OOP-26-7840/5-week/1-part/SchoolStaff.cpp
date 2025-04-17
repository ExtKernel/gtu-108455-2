#include <iostream>
using namespace std;

class Staff {
public:
    virtual void get_role_description() {
        cout << "General school staff member" << endl;
    }
};

class Teacher : public Staff {
public:
    void get_role_description() override {
        cout << "I educate students" << endl;
    }
};

class Principal : public Staff {
public:
    void get_role_description() override {
        cout << "I oversee the school operations" << endl;
    }
};

class Janitor : public Staff {
public:
    void get_role_description() override {
        cout << "I ensure the school remains clean" << endl;
    }
};

int main() {
    Teacher teacher;
    Principal principal;
    Janitor janitor;

    teacher.get_role_description();
    principal.get_role_description();
    janitor.get_role_description();

    return 0;
}
