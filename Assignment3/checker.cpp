#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

/*
Boolean Function checker: The int parameter (a) is checked if it is negative or positive
If it is greater than -1, (including 0 in this case), it will return true for positive
otherwise, it will be false for negative.
*/

bool checker(int a){
  if(a>-1){
    return true;
  }
  else{
    return false;
  }
}

/*
Main: Asks user to enter an Integer.
Stored to variable "ab"
Prints out, and calls function "checker"
It will print out true for positive, false for negative integer
*/

int main(){

  cout << "Enter Int: " << endl;
  int ab;
  cin >> ab;

  cout << checker(ab) << endl;

  return 0;

}
