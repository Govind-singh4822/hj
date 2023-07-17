#include<bits/stdc++.h>
using namespace std;

bool solve(int n)
{
    long long sq = sqrt(n);
    if(sq*sq==n)
        return true;
    else
        return false;
}
int main()
{
    int num;
    cin>>num;

    if(solve(num))
        cout<<"Yes";
    else
        cout<<"No";
}