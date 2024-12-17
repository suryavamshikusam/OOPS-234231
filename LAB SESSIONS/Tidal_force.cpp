#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    
    const double G = 6.674e-11;     
    const double M_moon = 7.35e22;  
    const double distance_earth_moon = 3.84e8; 
    double ocean_depth, water_mass; // Depth and mass of the ocean water
    double tidal_force, tidal_strength; // Calculated values


    cout << "Enter the depth of the ocean (in meters): ";
    cin >> ocean_depth;

  
    cout << "Enter the mass of water in the ocean (in kilograms): ";
    cin >> water_mass;

    // Tidal force calculation
    tidal_force = (G * M_moon * water_mass) / pow(distance_earth_moon, 3);

    
    tidal_strength = tidal_force / ocean_depth;

    cout << "Tidal Force: " << tidal_force << endl;
    cout << "Tidal Strength: " << tidal_strength << endl;

    return 0;
}

