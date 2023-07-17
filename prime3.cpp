#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
	int isprime[100]={0};
	for(int i=2;i<=n;i++)
	{
		if(isprime[i]==0)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				isprime[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(isprime[i]==0)
		{
			cout<<i<<" ";
		}
	}
}

int main()
{
	int n=17;
	solve(n);
}