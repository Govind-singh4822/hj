#include<bits/stdc++.h>
using namespace std;

class shape{
	public:
	virtual void draw()=0;
};

class rectangle:shape{
	public:
	void draw()
	{
		cout<<"drawing rectangle"<<endl;
	}
};

class circle:shape{
	public:
	void draw()
	{
		cout<<"drawing rectangle"<<endl;
	}
};

int main()
{
	rectangle r;
	circle c;
	r.draw();
	c.draw();
}

