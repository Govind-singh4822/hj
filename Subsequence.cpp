#include<bits/stdc++.h>
using namespace std;
bool solve(string s, string t, int n, int m){
    if(n==0)
        return true;
    if(m==0)
        return false;
    
    if(s[n-1]==t[m-1])
        return solve(s,t,n-1,m-1);
    return solve(s,t,n,m-1);
}

int main()
{
    string s;
    string t;
    cin>>s>>t;
    int n=s.size();
    int m = t.size();
    
    if(solve(s,t,n,m)){
        cout<<"YES";
    }else{
        cout<<"FALSE";
    }
}