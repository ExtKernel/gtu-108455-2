#include <iostream>

// Hierarchical Inheritance
class Shape {
protected:
    float width;
    float height;
    
public:
    Shape(float w, float h) : width(w), height(h) {}
};

class Rectangle : public Shape {
public:
    Rectangle(float w, float h) : Shape(w, h) {}
    
    float area() {
        return width * height;
    }
};

class Triangle : public Shape {
public:
    Triangle(float w, float h) : Shape(w, h) {}
    
    float area() {
        return width * height / 2;
    }
};

int main() {
    std::cout << "Task N3" << std::endl;
    Rectangle rect(5.0, 4.0);
    Triangle tri(5.0, 4.0);
    
    std::cout << "Rectangle Area: " << rect.area() << std::endl;
    std::cout << "Triangle Area: " << tri.area() << std::endl;
    
    return 0;
}
