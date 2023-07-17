#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num = n;
    int sum=0;
    while(n>0)
    {
        int r = n%10;
        sum=sum+r*r*r;
        n/=10;
    }
    if(sum==num){
        cout<<"Armstrong Number";
    }else
    {
        cout<<"Not Armstrong number";
    }
}