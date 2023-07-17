#include<bits/stdc++.h>
using namespace std;
class one{
    public:
    virtual void show()=0;
};
class two:public one{
    public:
    void show()
    {
        cout<<"Abstrct class"<<endl;
    }
};
int main()
{
    two ob;
    ob.show();
}

/*
#include<bits/stdc++.h>
using namespace std;
class shape{
    public:
    virtual void draw()=0;
};
class circle : public shape{
    public:
    void draw()
    {
        cout<<"Drawing Circle"<<endl;
    }
};
int main()
{
    circle c;
    c.draw();
}
*/