#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   vector<int>v;
   while(n!=0)
   {
    int r = n%10;
    v.push_back(r);
    n/=10;
   }
   string str="";
   reverse(v.begin(),v.end());
   
   for(int i=0;i<v.size()-1;i++)
   {
        int mx = max(v[i],v[i+1]);
        str+=to_string(mx);
        i++;
   }
   int k = v.size();
   if(v.size()%2!=0){
    str+=to_string(v[k-1]);
   }
  cout<<stoi(str);
}