#include<bits/stdc++.h>
using namespace std;

class base{
  public:
  void print()
  {
    cout<<"Base Function"<<endl;
  }
};

class derived: public base{
  public:
  void print()
  {
    cout<<"Derived Function"<<endl;
  }
};

int main()
{
  derived d;
  d.print();
}

// we are overriding the print() function.