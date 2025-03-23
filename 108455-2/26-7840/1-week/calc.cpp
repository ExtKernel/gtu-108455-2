#include <iostream>

class Calculator1 {
public:
    // Sum
    double add(double a, double b) {
        return a + b;
    }
    
    // Diff
    double subtract(double a, double b) {
        return a - b;
    }
};

class Calculator2 {
public:
    // Multiply
    double multiply(double a, double b) {
        return a * b;
    }
    
    // Divide
    double divide(double a, double b) {
        if (b == 0) {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 1; // meh, kind of error code. I guess not very important in the HW of the first week
        }
        return a / b;
    }
};

int main() {
    Calculator1 calc1;
    Calculator2 calc2;
    
    double x = 10.0;
    double y = 5.0;
    
    std::cout << "Sum: " << calc1.add(x, y) << std::endl;
    std::cout << "Difference: " << calc1.subtract(x, y) << std::endl;
    std::cout << "Product: " << calc2.multiply(x, y) << std::endl;
    std::cout << "Quotient: " << calc2.divide(x, y) << std::endl;
    
    return 0;
}
