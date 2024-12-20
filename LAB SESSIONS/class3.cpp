#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the surface area of a sphere
double surface_area(double radius) {
    return 4 * M_PI * radius * radius;
}

int main() {
    double watermelonRadius, grapeRadius;

    // Ask the user for the radius of the watermelon
    cout << "Enter the radius of the watermelon (in cm): ";
    cin >> watermelonRadius;

    // Ask the user for the radius of the grape
    cout << "Enter the radius of the grape (in cm): ";
    cin >> grapeRadius;

    // Calculate and display the surface area for the watermelon
    cout << "\nWatermelon:" << endl;
    cout << "Radius: " << watermelonRadius << " cm" << endl;
    cout << "Surface Area: " << surface_area(watermelonRadius) << " cm²" << endl;

    // Calculate and display the surface area for the grape
    cout << "\nGrape:" << endl;
    cout << "Radius: " << grapeRadius << " cm" << endl;
    cout << "Surface Area: " << surface_area(grapeRadius) << " cm²" << endl;

    return 0;
}

