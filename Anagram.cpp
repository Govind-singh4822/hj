#include<bits/stdc++.h>
using namespace std;
bool anagram(string s1,string s2)
{
	int freq[256] = {0};
	for(int i=0;i<s1.size();i++)
	{
		freq[s1[i]]++;
	}

	for(int i=0;i<s2.size();i++)
	{
		freq[s2[i]]--;
	}
	int flag=0;
	for(int i=0;i<256;i++)
	{
		if(freq[i]!=0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string s1;
	string s2;
	cin>>s1>>s2;

	
	if(anagram(s1,s2)){
		cout<<"Anagram"<<endl;
	}else
	{
		cout<<"Not anagram";
	}
}