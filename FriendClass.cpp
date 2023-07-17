#include<bits/stdc++.h>
using namespace std;

class A{
	int x=5;
	friend class B;
};

class B{
	public:
	void display(A &a)
	{
		cout<<a.x;
	}
};

int main()
{
	A a;
	B b;
	b.display(a);
}