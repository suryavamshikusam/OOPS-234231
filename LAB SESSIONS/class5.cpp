#include <iostream>
using namespace std;

int main() {
    double canadaPopulation, canadaArea;
    double brazilPopulation, brazilArea;
    double indiaPopulation, indiaArea;

    // Input data for Canada
    cout << "Enter the population and area of Canada (in km�): ";
    cin >> canadaPopulation >> canadaArea;

    // Input data for Brazil
    cout << "Enter the population and area of Brazil (in km�): ";
    cin >> brazilPopulation >> brazilArea;

    // Input data for India
    cout << "Enter the population and area of India (in km�): ";
    cin >> indiaPopulation >> indiaArea;

    // Calculate population density for each country
    double canadaDensity = canadaPopulation / canadaArea;
    double brazilDensity = brazilPopulation / brazilArea;
    double indiaDensity = indiaPopulation / indiaArea;

    //population density for each country
    cout << "\nCanada:" << endl;
    cout << "Population: " << canadaPopulation << endl;
    cout << "Area: " << canadaArea << " km�" << endl;
    cout << "Population Density: " << canadaDensity << " people per km�" << endl;

    cout << "\nBrazil:" << endl;
    cout << "Population: " << brazilPopulation << endl;
    cout << "Area: " << brazilArea << " km�" << endl;
    cout << "Population Density: " << brazilDensity << " people per km�" << endl;

    cout << "\nIndia:" << endl;
    cout << "Population: " << indiaPopulation << endl;
    cout << "Area: " << indiaArea << " km�" << endl;
    cout << "Population Density: " << indiaDensity << " people per km�" << endl;

    return 0;
}

