#include <iostream>
using namespace std;

int main() {
    // Variables for each vehicle
    double motorcycleFuelTank, motorcycleDistance;
    double bicycleFuelTank, bicycleDistance;
    double truckFuelTank, truckDistance;
    double audiR8FuelTank, audiR8Distance;
    double toyotaSupraFuelTank, toyotaSupraDistance;

    // Input for each vehicle
    cout << "Enter the fuel tank capacity and distance for Motorcycle (in liters and km): ";
    cin >> motorcycleFuelTank >> motorcycleDistance;

    cout << "Enter the distance for Bicycle (in km): ";
    cin >> bicycleDistance;
    bicycleFuelTank = 0;  // Bicycles don't have a fuel tank

    cout << "Enter the fuel tank capacity and distance for Truck (in liters and km): ";
    cin >> truckFuelTank >> truckDistance;

    cout << "Enter the fuel tank capacity and distance for Audi R8 (in liters and km): ";
    cin >> audiR8FuelTank >> audiR8Distance;

    cout << "Enter the fuel tank capacity and distance for Toyota Supra (in liters and km): ";
    cin >> toyotaSupraFuelTank >> toyotaSupraDistance;

    // Calculate Mileage for each vehicle with if-else
    double motorcycleMileage, bicycleMileage, truckMileage, audiR8Mileage, toyotaSupraMileage;

    // Motorcycle mileage calculation
    if (motorcycleFuelTank != 0) {
        motorcycleMileage = motorcycleDistance / motorcycleFuelTank;
    } else {
        motorcycleMileage = 0;
    }

    // Bicycle mileage (no fuel tank)
    bicycleMileage = -1;  //to show no fuel

    // Truck mileage calculation
    if (truckFuelTank != 0) {
        truckMileage = truckDistance / truckFuelTank;
    } else {
        truckMileage = 0;
    }

    // Audi R8 mileage calculation
    if (audiR8FuelTank != 0) {
        audiR8Mileage = audiR8Distance / audiR8FuelTank;
    } else {
        audiR8Mileage = 0;
    }

    // Toyota Supra mileage calculation
    if (toyotaSupraFuelTank != 0) {
        toyotaSupraMileage = toyotaSupraDistance / toyotaSupraFuelTank;
    } else {
        toyotaSupraMileage = 0;
    }

    // Display results
    cout << "\nMotorcycle Mileage: " << motorcycleMileage << " km per liter" << endl;
    cout << "Bicycle Mileage: " << (bicycleMileage == -1 ? "N/A (No fuel)" : to_string(bicycleMileage)) << endl;
    cout << "Truck Mileage: " << truckMileage << " km per liter" << endl;
    cout << "Audi R8 Mileage: " << audiR8Mileage << " km per liter" << endl;
    cout << "Toyota Supra Mileage: " << toyotaSupraMileage << " km per liter" << endl;

    return 0;
}

