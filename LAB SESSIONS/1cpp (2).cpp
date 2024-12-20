#include <iostream>
/*
An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.

The preprocessor will find the iostream header file (often in a
subdirectory called “include”) and insert it.

Do you when stdio.h is callled in a C Program and who calls it?

*/
using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class test //creation of class
{  string name;
   int regd_no;
	//member variable declared//not declared as public by default it is private.
	
	public://
	    void set(){//member functions
	     cout<<"Enter the your name: "<<endl;
		 cin>>name;	
		 
		 cout<<"Enter the your reg no.: "<<endl;
		 cin>>regd_no;
		 }
        void display(){//member functions
        	cout<<"Your name and regd_no is: "<<name<<" "<<regd_no<<endl;
		}


};//body of the class is closed





int main() { // In C++, main( )always has return type of int.

test t1;//ceration of an object....memory is allocated here
//cout<<t1.a;   	[Error] 'int test::a' is private
t1.set();
t1.display();
return 0;
//cout << "This is output.\n"; // To be read as "Send the string “This is output.” to the object called cout".

/*
The operator cout is an object
Belongs to output stream class
Used to perform write operations on the output devices e.g. screen, disk etc.
Used with left shift operator (<<), called insertion or put-to operator or output
operator
Syntax
cout « "variable";
Variable may be built in data type/string/constant/blank character
It also supports cascaded output operations
Does not require explicit Format specification (unlike printf that needs “string”)
*/
// this is a single line comment /* you can still use C style comments */
// input a number using >>



//cout << "Enter a number: ";
//cin >> i;
/*
The operator cin is an object
Belongs to input stream class
Used to perform read operations from the input devices e.g. keyboard
Used with right shift operator (>>), called extraction / get /input operator
Syntax

cin » ""variable" ";
Variable may be built in data type/string/blank character
It should have at least one argument
It also supports cascaded input operations
Does not require explicit Format specification (unlike scanff that needs “string”)
*/
// now, output a number using <<
//cout <<" The number given is : " << i << "\n";
//return 0;//int return from main()
}
