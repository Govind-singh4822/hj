#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int decimal=0;
    int i=0;

    while(n!=0)
    {
      int d = n%10;
      decimal = decimal+d*pow(2,i);
      n/=10;
      i++;
    }
    cout<<decimal;
    
    
    
}