#include <iostream>
#include <string>
using namespace std;

// Class definition for a Landmark
class Landmark {
private:
    string name;
    double area;               // Area in square kilometers
    int touristsPerHour;       // Number of tourists per hour

public:
    // Method to set landmark information
    void setInfo(string landmarkName, double landmarkArea, int totalTourists) {
        name = landmarkName;
        area = landmarkArea;
        touristsPerHour = totalTourists / 24; // Calculate tourists per hour
    }

    // Method to display information about the landmark
    void displayInfo() {
        cout << "Landmark: " << name << endl;
        cout << "Area: " << area << " sq. km" << endl;
        cout << "Estimated tourists per hour: " << touristsPerHour << endl;
        
    }
};

int main() {
    Landmark landmark;
    string name;
    double area;
    int totalTourists;

    // User input for landmark information
    cout << "Enter the name of the landmark: ";
    getline(cin, name);
    cout << "Enter the area of the landmark (in sq. km): ";
    cin >> area;
    cout << "Enter the estimated total number of tourists in a day: ";
    cin >> totalTourists;

    // Setting the landmark information
    landmark.setInfo(name, area, totalTourists);

    // Display the entered information
    landmark.displayInfo();

    return 0;
}

