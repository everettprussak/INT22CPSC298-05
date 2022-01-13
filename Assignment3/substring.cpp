

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/*
Function str_check: Gets a String Parameter and Char parameter.
Intitializes int s = 0, then starts for loop to check if char is inside of our parameter string (a).
If our char is ever inside of our string, it returns s, which would be equal to the index.
S is incremented after each iteration.
If it is not inside the string, it returns -1.
*/

int str_check(string a, char c){
  int s = 0;
  for(char d: a){
    if(d==c){
      return s;
    }
    s++;
  }
  return -1;
}

/*
Main: Asks user for a String and a Character
It stores the String in ab
It store the Character in cb
It then calls the function "str_check".
If it returns the value -1, it will print character not found.
Otherwise, it will print return value (which is the index number of the cahracter first found in the string)
*/

int main(){

  string ab;
  char cb;

  cout << "Enter String: " << endl;
  getline(cin,ab);
  cout << "Enter Char: " << endl;
  cin >> cb;

  if(str_check(ab,cb)==-1){
    cout << "Character Not Found." << endl;
  }

  else{
    cout << str_check(ab,cb) << endl;
  }

  return 0;
}
