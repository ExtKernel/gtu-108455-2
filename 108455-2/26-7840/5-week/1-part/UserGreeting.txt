#include <iostream>
using namespace std;

class User {
public:
    virtual void greet() {
        cout << "Hello, user" << endl;
    }
};

class AdminUser : public User {
public:
    void greet() override {
        cout << "Welcome, admin" << endl;
    }
};

class GuestUser : public User {
public:
    void greet() override {
        cout << "Welcome, guest" << endl;
    }
};

class MemberUser : public User {
public:
    void greet() override {
        cout << "Welcome back" << endl;
    }
};

int main() {
    AdminUser admin;
    GuestUser guest;
    MemberUser member;

    admin.greet();
    guest.greet();
    member.greet();

    return 0;
}

