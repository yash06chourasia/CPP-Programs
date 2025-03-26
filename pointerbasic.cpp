#include<iostream>
using namespace std;
int main()
{
	int a;
	int *p;
	int **q;
	int ***r;
	a=10;
	p=&a;
	q=&p;
    r=&q;
    cout<<"\n"<<a;
    cout<<"\n"<<p;
    cout<<"\n"<<q;
    cout<<"\n"<<r;
    cout<<"\n"<<&a;
	cout<<"\n"<<&p;
    cout<<"\n"<<&q;
    cout<<"\n"<<&r;
	cout<<"\n"<<*p;
    cout<<"\n"<<*q;
    cout<<"\n"<<*r;
	cout<<"\n"<<**q;
    cout<<"\n"<<**r;
    cout<<"\n"<<***r;
    return 0;
    
    
    
}
