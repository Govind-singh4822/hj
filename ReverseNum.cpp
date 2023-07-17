#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 1234;
    int res;

    while(n>0)
    {
        int r = n%10;
        res = res*10+r;
        n/=10;
    }
    cout<<res;
	
}