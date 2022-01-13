/*
In a file named comparator.cpp, define a function str_compare, that takes two
strings as parameters and returns the first index at which the characters of the two
strings do not match. For example, if the input is aabbcc and aabccc, then the
function should return 3. In the main program repeatedly ask the user to enter 2
strings, space separated, and keep printing the output of the str_compare function
until the user provides “done done” as the input.
*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

/*
Function str_compare: compares two strings from the user, and returns index of first character that is not the same
Int C is created and equal to 0.
For loop iterating through string a
It determines if the character at a, which is the sames index number as b, is not the same
If they are different, c is returned, which is representing the index the strings first differ
Otherwise the for loop ends, and a large value is returned to represent a same string value
*/

int str_compare(string a, string b){
  int c = 0;
    for(char a1: a){
    if(a1!=b[c]){
      return c;
    }
    c++;
  }
  return 10101;
}

/*
Main: A while loop will continunally ask a user for two strings
until they type "done done" exactly.
The strings are stored in "a" and "b".
If the strings are not "done" and "done", then
it will call function str_compare and store its INT value in a
variable called "ret".

If ret (our return value) is 10101, then the strings are very connected in this way:
The first words is the same as word 2. Ex: "They" and "They".
Or: The First word is the second word but shorter. Ex: "ABCD" and "ABCDEF"

Otherwise, it is returned the value of the function, of where the strings differ for the first time.
*/

int main(){

  while(true){
    cout << "Enter Two Words Space Seperared: " << endl;
    string a, b;
    cin >> a >> b;
    if(a=="done" && b=="done"){
      break;
    }
    int ret = str_compare(a,b);

    if(ret==10101){
      cout << "The First Word is entirely inside of The Second Word!" << endl;
    }
    else{
      cout << ret << endl;
    }
  }

  return 0;
}
