#include<bits/stdc++.h>
using namespace std;

bool solve(int n)
{
    if(n<=1)
        return false;
    
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;

}

int main()
{
    int n;cin>>n;
    solve(n)?cout<<"true":cout<<"false";
}