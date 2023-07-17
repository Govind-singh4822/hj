#include<bits/stdc++.h>
using namespace std;
void solve(string s, string t)
{
    if(s.empty()){
        cout<<t<<endl;
        return;
    }
    solve(s.substr(1),t+s[0]);
    solve(s.substr(1),t);
}

int main()
{
    string s;
    cin>>s;
    solve(s,"");
}