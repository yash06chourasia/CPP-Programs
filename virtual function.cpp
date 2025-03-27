#include<iostream>
using namespace std;
class base
{
	public:
		virtual display()
		{
			cout<<"base class";
			
		}
};
class derived :public base
{
	public:
		display(){
			cout<<"derived class";
			
		}
};
int main()
{
	base*p;
	derived d;
	p=&d;
	p->display();
	return 0;
}
