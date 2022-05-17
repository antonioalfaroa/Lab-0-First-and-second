// Program Area calculates the area of a square.
// The user is prompted to enter the number of inches on each
// side. Note that "endl" in line 7 ends in the letter "l", not
// the number one.
#include <iostream> //we call the main library which is necessary for each line ofthe code
			
using namespace std; // we determine that we are going to use the std group so we are not supposed to put std before each statement of the code

int main (){ //we create the main function
int  inches; //we declare the inches variable wich is an entire number

cout  << "Enter the number of inches on a side " //we ask the user to enter a number of inches of a side
         << endl; // we do a line break
cout  << "Press the return key." //we ask the user to press the return key
         << endl; // we do a line break
cin    >> inches; //the user enters the inches number
cout  << endl // we do a line break before showing the area
        << "The area is "  << inches * inches  <<"." //we calculate the area and show it too
         << endl; // we do a line break

return 0; //we return a 0 value as the main function asks us to return an entire number and we finish the code
				}
