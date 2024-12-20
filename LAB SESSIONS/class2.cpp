#include <iostream>
#include <string>
using namespace std;

// Class definition for an AnimalOrBird
class AnimalOrBird {
private:
    double frequency;         // Frequency of their roar or chirp in Hz

public:
    // Method to set frequency
    void setFrequency(double soundFrequency) {
        frequency = soundFrequency;
    }

    // Method to get frequency
    double getFrequency() {
        return frequency;
    }
};

int main() {
    AnimalOrBird animal;
    double frequency;

    // User input for frequency
    cout << "Enter the frequency of roar or chirp (in Hz): ";
    cin >> frequency;

    // Set and display frequency
    animal.setFrequency(frequency);
    cout << "The frequency of the roar or chirp is: " << animal.getFrequency() << " Hz" << endl;

    return 0;
}

