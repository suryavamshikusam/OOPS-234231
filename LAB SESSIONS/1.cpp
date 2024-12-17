#include <iostream>
using namespace std;

int main()
{
    int a = 6;   // Initialize variable 'a' with the value 6
    int b = 0;   // Initialize variable 'b' with the value 0

    // Loop runs as long as 'a' is less than 10
    while (a < 10) 
    {
        a = a / 12 + 1;  // Update 'a' by dividing it by 12 and adding 1
        a += b;          // Add the value of 'b' to 'a'
    }

    cout << a; // Print the final value of 'a' after exiting the loop
    return 0;
}



#include<iostream>
using namespace std;

int main()
{
    float sum = 0.0;  // Initialize the sum variable as 0.0
    float j = 1.0;    // Initialize denominator 'j' as 1.0
    float i = 2.0;    // Initialize numerator 'i' as 2.0

    // Loop runs while the ratio 'i / j' is greater than 0.0625
    while (i / j > 0.0625) 
    {
        j = j + j;         // Double the value of 'j' in each iteration
        sum = sum + i / j; // Add the current ratio 'i / j' to the sum
        cout << sum << endl; // Print the updated value of 'sum'
    }

    return 0;
}


#include<iostream>
using namespace std;

int main()
{
    int A = 9; // Initialize variable 'A' with 9
    int B = 3; // Initialize variable 'B' with 3

    // Loop runs until 'A' is equal to 'B'
    while (A != B) 
    {
        if (A > B) // If 'A' is greater than 'B', subtract 'B' from 'A'
            A -= B;
        else       // If 'B' is greater than 'A', subtract 'A' from 'B'
            B -= A;
    }

    cout << A; // Print the final value of 'A', which is the GCD of original 'A' and 'B'
    return 0;
}



#include<iostream>
using namespace std;

// Function to increment and return a static variable
int funcp()
{
    static int x = 1; // 'x' retains its value between function calls, initially set to 1
    x++;              // Increment the value of 'x' by 1
    return x;         // Return the updated value of 'x'
}

int main()
{
    int x, y;        // Declare two variables 'x' and 'y'
    x = funcp();     // Call 'funcp()', which increments and returns the value of static 'x'
    y = funcp() + x; // Call 'funcp()' again, add its value to 'x' and store the result in 'y'

    cout << (x + y) << endl; // Print the sum of 'x' and 'y'
    return 0;                // Return 0 indicating successful program execution
}


#include<iostream>
using namespace std;
int foo(int x, int y, int q)


