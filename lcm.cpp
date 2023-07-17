#include<bits/stdc++.h>
using namespace std;

long int gcd(long int a,long int b)
{
    return b==0 ? a : gcd(b,a%b);
}

long int lcm(int a,int b)
{
    return ( a/gcd(a,b) )*b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
}