#include <iostream>
#include <vector>
using namespace std;

class Vehicle {
public:
    string brand;
    string model;
    int year;
    int mileage;

    virtual void displayInfo() = 0;
};

class Car : public Vehicle {
public:
    int doors;

    Car(string b, string m, int y, int mile, int d) {
        brand = b;
        model = m;
        year = y;
        mileage = mile;
        doors = d;
    }

    void displayInfo() override {
        cout << "Car: " << brand << " " << model << ", " << year << ", " << mileage << " km, " << doors << " doors" << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    bool hasSidecar;

    Motorcycle(string b, string m, int y, int mile, bool sidecar) {
        brand = b;
        model = m;
        year = y;
        mileage = mile;
        hasSidecar = sidecar;
    }

    void displayInfo() override {
        cout << "Motorcycle: " << brand << " " << model << ", " << year << ", " << mileage << " km, Sidecar: " << (hasSidecar ? "Yes" : "No") << endl;
    }
};

class ServiceCenter {
public:
    vector<Vehicle*> vehicles;

    void addVehicle(Vehicle* v) {
        vehicles.push_back(v);
    }

    void showAllVehicles() {
        for (auto& v : vehicles) {
            v->displayInfo();
        }
    }
};

int main() {
    Car car1("Toyota", "Corolla", 2019, 15000, 4);
    Car car2("Honda", "Civic", 2021, 8000, 4);
    Motorcycle bike("Harley", "Sportster", 2020, 5000, true);

    ServiceCenter service;
    service.addVehicle(&car1);
    service.addVehicle(&car2);
    service.addVehicle(&bike);

    service.showAllVehicles();

    return 0;
}

