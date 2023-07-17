// Function Overloading
#include<bits/stdc++.h>
using namespace std;

class student{
    public:

    void print(int n){
         cout<<"Integr fun : "<<n<<endl;
    }

    void print(double n){
         cout<<"Double fun : "<<n<<endl;
    }
};

int main()
{
    student s;
    s.print(5);
    s.print(5.5);
}