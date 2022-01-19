#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <sstream>

using namespace std;

class Vectorize {
  public:
    vector<char> v;
    int size;
    Vectorize();
    Vectorize(char c[], int r);
    ~Vectorize();
    int get_size();
    void add(char a);
    void remove(char ab);
    void remove(int bc);
    char get(int cd);
    void print();
};

Vectorize::Vectorize(){
  cout << "Default Constructor Used" << endl;
}

Vectorize::Vectorize(char c[], int r){
  cout << "Constructor with parameter used" << endl;
  size = r;
  v.insert(v.begin(),c,c+r); //c+r
}

Vectorize::~Vectorize(){
  v.clear();
}

int Vectorize::get_size(){
  return v.size();
}

void Vectorize::add(char a){
  v.push_back(a);
}

void Vectorize::remove(char ab){
  int count = 0;
  for(char f: v){
    if(ab==f){
      v.erase(v.begin()+count);
    }
    count++;
  }
}

void Vectorize::remove(int bc){
  v.erase(v.begin()+bc);
}

char Vectorize::get(int bc){
  return v[bc];
}

void Vectorize::print(){
  for(char a: v){
    cout << a << " ";
  }
  cout << endl;
}



int main(){
 char letters[2] = {'a','b'};
 Vectorize victor(letters,2);
 victor.add('c');
 victor.add('d');
 victor.remove('a');
 victor.remove(2);
 victor.print();
 cout << victor.get_size() << endl;
 cout << victor.get(0) << endl;
 return 0;
}
