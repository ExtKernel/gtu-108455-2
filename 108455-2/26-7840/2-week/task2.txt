#include <iostream>
#include <string>

// Multilevel Inheritance
class Animal {
protected:
    std::string species;
    
public:
    Animal(const std::string& s) : species(s) {}
};

class Mammal : public Animal {
protected:
    bool hasFur;
    
public:
    Mammal(const std::string& s, bool fur) : Animal(s), hasFur(fur) {}
};

class Dog : public Mammal {
private:
    std::string breed;
    
public:
    Dog(const std::string& s, bool fur, const std::string& b) : Mammal(s, fur), breed(b) {}
    
    void showDetails() {
        std::cout << "Dog Details:" << std::endl;
        std::cout << "Species: " << species << std::endl;
        std::cout << "Has Fur: " << (hasFur ? "Yes" : "No") << std::endl;
        std::cout << "Breed: " << breed << std::endl;
    }
};

int main() {
    std::cout << "Task N2" << std::endl;
    Dog dog("Dog?", true, "Golden Retriever");
    dog.showDetails();
    
    return 0;
}
