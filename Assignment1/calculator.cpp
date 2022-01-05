#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

  int x, exp, answer;
  cout << "Enter Value of x: " << endl;
  cin >> x;
  cout << "Enter Value of Exponent: " << endl;
  cin >> exp;

  answer = pow(x,exp);
  cout << answer << endl;



  return 0;
}
