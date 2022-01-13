/*
In a file named locations.cpp, ask the user to enter an integer and store it in a
variable num. Next, create a pointer that points to the integer variable. Now, print
the address of num using the pointer. Also using the pointer, change the value of
num to 42. Finally, print the memory address of the pointer variable.

*/


#include <iostream>
#include <sstream>
#include <string>

using namespace std;

/*
Main: Asks user for Integer value.
Intializes int num, and stores user input inside.
Creates a pointer, "pointer1" that points to address of num.
Prints pointer1, which is the address of num,
Changes value of num from user input to 42 using *pointer1 = 42.
Prints the value of num from *pointer1
Lastly &pointer1 is used to show pointer1 address
*/

int main(){

    int num;
    cout << "Enter Integer: " << endl;
    cin >> num;
    int* pointer1 = &num;
    cout << pointer1 << endl;
    *pointer1 = 42;
    cout << *pointer1 << endl;
    cout << &pointer1 << endl;

  return 0;
}
