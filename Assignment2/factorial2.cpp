#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){

  int a, total = 1;
  cout << "Enter Integer: ";
  cin >> a;
  int counter = 2;
  while(counter<a+1){
    total = total * counter;
    ++counter;
  }

  cout << total << endl;

  return 0;
}
