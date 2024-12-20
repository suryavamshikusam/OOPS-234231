#include <iostream>
using namespace std;

int main() {
    // Define variables for each color
    double redMass, blueMass;
    double redVolume, blueVolume;

    // Input the mass and volume for Red and Blue color
    cout << "Enter the mass of Red color (in grams): ";
    cin >> redMass;
    cout << "Enter the volume of Red color (in cubic centimeters): ";
    cin >> redVolume;

    cout << "Enter the mass of Blue color (in grams): ";
    cin >> blueMass;
    cout << "Enter the volume of Blue color (in cubic centimeters): ";
    cin >> blueVolume;

    // Calculate Density for each color (Density = Mass / Volume)
    double redDensity = redMass / redVolume;
    double blueDensity = blueMass / blueVolume;

    // Display results
    cout << "\nRed Color:" << endl;
    cout << "Mass: " << redMass << " grams" << endl;
    cout << "Volume: " << redVolume << " cubic centimeters" << endl;
    cout << "Density: " << redDensity << " grams per cubic centimeter" << endl;

    cout << "\nBlue Color:" << endl;
    cout << "Mass: " << blueMass << " grams" << endl;
    cout << "Volume: " << blueVolume << " cubic centimeters" << endl;
    cout << "Density: " << blueDensity << " grams per cubic centimeter" << endl;

    return 0;
}

