#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

  string x, exp;
  int x_int, exp_int;
  int answer;
  cout << "Enter Value of x: " << endl;
  getline(cin,x);
  stringstream s1(x);
  s1 >> x_int;
  cout << "Enter Value of Exponent: " << endl;
  getline(cin,exp);
  stringstream s2(exp);
  s2 >> exp_int;

  if(s1.fail() || s2.fail()){
    cout << "incorrect inputs provided!" << endl;
  }
  else{
    answer = pow(x_int,exp_int);
    cout << answer << endl;
  }



  return 0;
}
