#include <iostream>
using namespace std;

//class for Complex numbers
class Complex
{
    float real;
    float imag;
	
	public:
    //initialize a complex number
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
	

    //function to add two complex numbers
    Complex add(const Complex & c) const 
	{
        return Complex(real + c.real, imag + c.imag);
    }

    // function to display a complex number
    void display() const 
	{
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    float r1, i1, r2, i2;

    // Input the first complex number
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> r1 >> i1;

    // Input the second complex number
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> r2 >> i2;

    // Create Complex objects
    Complex c1(r1, i1), c2(r2, i2);

    // Add the two complex numbers
    Complex sum = c1.add(c2);

    // Display the result
    cout << "The sum of the complex numbers is: ";
    sum.display();

    return 0;
}

