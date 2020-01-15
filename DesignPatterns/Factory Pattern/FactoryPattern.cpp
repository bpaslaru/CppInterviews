#include <iostream>

using namespace std;

enum VehicleType {
    VT_TwoWheeler, VT_ThreeWheeler, VT_FourWheeler
};

class Vehicle{
public:
    virtual void printVehicle() = 0;
    static Vehicle* Create(VehicleType type);
};

class TwoWheeler: public Vehicle {
public:
    void printVehicle() {
        cout << "I am two wheeler" << endl;
    }
};

class ThreeWheeler: public Vehicle {
public:
    void printVehicle() {
        cout << "I am three wheeler" << endl;
    }
};

class FourWheeler: public Vehicle {
public:
    void printVehicle() {
        cout << "I am four wheeler" << endl;
    }
};

//Factory method for createing different type objects
//Only method to be modified when a change is required
Vehicle* Vehicle::Create(VehicleType type) {
    switch (type)
    {
        case(VT_TwoWheeler):
            return new TwoWheeler();
        case(VT_ThreeWheeler):
            return new ThreeWheeler();
        case(VT_FourWheeler):
            return new FourWheeler();
    }
}

// Client class
class Client {
public:

    // Client doesn't explicitly create objects
    // but passes type to factory method "Create()"
    Client()
    {
        VehicleType type = VT_ThreeWheeler;
        pVehicle = Vehicle::Create(type);
    }
    ~Client() {
        if (pVehicle) {
            delete[] pVehicle;
            pVehicle = NULL;
        }
    }
    Vehicle* getVehicle()  {
        return pVehicle;
    }

private:
    Vehicle *pVehicle;
};

// Driver program
int main() {
    Client *pClient = new Client();
    Vehicle * pVehicle = pClient->getVehicle();
    pVehicle->printVehicle();
    return 0;
}
