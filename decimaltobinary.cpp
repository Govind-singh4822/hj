#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int binary=0;
    int i=1;
    
    while(n!=0){
      int r = n%2;
      n/=2;
      binary = binary+r*i;
      i=i*10;
    }
    cout<<binary;
    
}