#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b)
{
    for(int i=1;i<=b;i++)
    {
        a++;
    }
    return a;

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<solve(a,b);
}