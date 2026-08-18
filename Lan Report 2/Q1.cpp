#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string brand;
    string model;

    Vehicle(string b, string m) {
        brand = b;
        model = m;
    }

    virtual void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

class Car : virtual public Vehicle {
public:
    int numberOfDoors;
    string fuelType;

    Car(string b, string m, int doors, string fuel)
        : Vehicle(b, m) {
        numberOfDoors = doors;
        fuelType = fuel;
    }

    void display() override {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number of Doors: " << numberOfDoors << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class Truck : virtual public Vehicle {
public:
    double loadCapacity;
    int numberOfWheels;

    Truck(string b, string m, double load, int wheels)
        : Vehicle(b, m) {
        loadCapacity = load;
        numberOfWheels = wheels;
    }

    void display() override {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Load Capacity: " << loadCapacity << endl;
        cout << "Number of Wheels: " << numberOfWheels << endl;
    }
};

class HybridVehicle : public Car, public Truck {
public:
    double batteryCapacity;

    HybridVehicle(string b, string m, int doors, string fuel,
                  double load, int wheels, double battery)
        : Vehicle(b, m),
          Car(b, m, doors, fuel),
          Truck(b, m, load, wheels) {
        batteryCapacity = battery;
    }

    void display() override {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number of Doors: " << numberOfDoors << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Load Capacity: " << loadCapacity << endl;
        cout << "Number of Wheels: " << numberOfWheels << endl;
        cout << "Battery Capacity: " << batteryCapacity << endl;
    }
};

class ElectricHybrid : public HybridVehicle {
public:
    double chargingTime;

    ElectricHybrid(string b, string m, int doors, string fuel,
                   double load, int wheels, double battery,
                   double charging)
        : Vehicle(b, m),
          HybridVehicle(b, m, doors, fuel, load, wheels, battery) {
        chargingTime = charging;
    }

    void display() override {
        HybridVehicle::display();
        cout << "Charging Time: " << chargingTime << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    int engineCapacity;
    bool hasCarrier;

    Motorcycle(string b, string m, int engine, bool carrier)
        : Vehicle(b, m) {
        engineCapacity = engine;
        hasCarrier = carrier;
    }

    void display() override {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity << endl;
        cout << "Has Carrier: " << (hasCarrier ? "Yes" : "No") << endl;
    }
};

int main() {
    Car car("Toyota", "Corolla", 4, "Petrol");
    Truck truck("Volvo", "FH16", 25, 10);

    HybridVehicle hybrid(
        "Ford", "Hybrid Truck",
        4, "Hybrid",
        5, 6, 60
    );

    ElectricHybrid electricHybrid(
        "Tesla", "Electric Hybrid",
        4, "Electric",
        3, 4, 100, 2.5
    );

    Motorcycle motorcycle("Yamaha", "R15", 155, true);

    cout << "Car Information:" << endl;
    car.display();

    cout << "\nTruck Information:" << endl;
    truck.display();

    cout << "\nHybrid Vehicle Information:" << endl;
    hybrid.display();

    cout << "\nElectric Hybrid Information:" << endl;
    electricHybrid.display();

    cout << "\nMotorcycle Information:" << endl;
    motorcycle.display();

    return 0;
}