#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){

  int a, total=1;
  cout << "Enter Integer: ";
  cin >> a;

  for(int i=2; i <a+1; i++){
    total = total * i;
  }

  cout << total << endl;

  return 0;
}
