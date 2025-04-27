#include <iostream>
using namespace std;

class Vehicle {
protected:
    double speed;
public:
    virtual void CalculateSpeed(double value) = 0;
    double GetSpeed() { return speed; }
};

class Car : public Vehicle {
public:
    void CalculateSpeed(double distance) override {
        speed = distance / 2;
    }
};

class Bike : public Vehicle {
public:
    void CalculateSpeed(double time) override {
        speed = time * 3;
    }
};

int main() {
    Car car;
    Bike bike;
    car.CalculateSpeed(100);
    bike.CalculateSpeed(4);
    cout << car.GetSpeed() << endl;
    cout << bike.GetSpeed() << endl;
}

