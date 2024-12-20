#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double pizzaRadius, icecreamLength, icecreamBreadth, chocolateLength, chocolateBreadth;

   
    cout << "Enter the radius of the pizza (in cm): ";
    cin >> pizzaRadius;

    cout << "Enter the length and breadth of the ice cream (in cm): ";
    cin >> icecreamLength >> icecreamBreadth;

    cout << "Enter the length and breadth of the chocolate (in cm): ";
    cin >> chocolateLength >> chocolateBreadth;

    // Calculate the time to eat the pizza (based on area of the circle)
    double pizzaTime = M_PI * pizzaRadius * pizzaRadius / 10;  // Assume 10 units of time per area unit

    // Calculate the time to eat the ice cream (based on area of the rectangle)
    double icecreamTime = icecreamLength * icecreamBreadth / 5;  // Assume 5 units of time per area unit

    // Calculate the time to eat the chocolate (based on area of the rectangle)
    double chocolateTime = chocolateLength * chocolateBreadth / 8;  // Assume 8 units of time per area unit

    //results
    cout << "\nPizza:" << endl;
    cout << "Radius: " << pizzaRadius << " cm" << endl;
    cout << "Time to eat completely: " << pizzaTime << " minutes" << endl;

    cout << "\nIcecream:" << endl;
    cout << "Length: " << icecreamLength << " cm, Breadth: " << icecreamBreadth << " cm" << endl;
    cout << "Time to eat completely: " << icecreamTime << " minutes" << endl;

    cout << "\nChocolate:" << endl;
    cout << "Length: " << chocolateLength << " cm, Breadth: " << chocolateBreadth << " cm" << endl;
    cout << "Time to eat completely: " << chocolateTime << " minutes" << endl;

    return 0;
}

