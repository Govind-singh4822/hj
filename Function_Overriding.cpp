// Function Overrinding 
#include<bits/stdc++.h>
using namespace std;

class Person{        // base
	public:
	void printName(){
		cout<<"Person"<<endl;}
};

class Men : public Person{      // derived
	public:
	void printName(){
		cout<<"Aman"<<endl; }
};

class Women : public Person{    // derived
	public:
	void printName(){
		cout<<"Govind"<<endl; }
};


int main()
{
    Person p;
    p.printName();
    Women w;
    w.printName();
    Men m;
    m.printName();
}