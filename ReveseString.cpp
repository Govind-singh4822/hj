#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int n = str.size();
	int s = 0;
	int e = n-1;

	while(s<=e)
	{
		swap(str[s],str[e]);
		s++;
		e--;
	}
	cout<<str;
}