#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

  int salary, years;
  float bonus;

  cout << "Enter Salary (without commas and $ sign): " << endl;

  cin >> salary;

  cout << "Enter Years you have worked at the company: " << endl;

  cin >> years;

  if(years >= 9){
    bonus = salary * 0.05;
    cout << bonus << endl;
  }

  else{
    cout << 0 << endl;
  }

  return 0;
}
