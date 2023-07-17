#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int mark;
    public:
    void setdata(int n){
        mark = n;
    }

    int getdata(){
        return mark;
    }
};
int main()
{
    student s;
    s.setdata(500);
    cout<<s.getdata();

}