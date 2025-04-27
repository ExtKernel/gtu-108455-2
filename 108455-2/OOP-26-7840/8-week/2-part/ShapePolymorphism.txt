#include <iostream>
#include <vector>
#include <memory>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double Area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double Area() override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double Area() override {
        return length * width;
    }
};

int main() {
    vector<shared_ptr<Shape>> shapes;
    shapes.push_back(make_shared<Circle>(5));
    shapes.push_back(make_shared<Rectangle>(4, 6));
    for (auto& shape : shapes) {
        cout << shape->Area() << endl;
    }
}

