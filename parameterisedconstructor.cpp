#include<iostream>
#include<string>
using namespace std;
class student{
		int rno;
	   string name;
	   double fee;
	public:
	
		student(int r,string n,double f)
		{ 
		  rno=r;
		  name=n;
		  fee=f;
		}
	    int display()
	    { cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
		}
};

int main()
{   	int rno;
	   string name;
	   double fee;
cout<<"ENTER ROLLNO. ";
		 cin>>rno;
		  cout<<"ENTER NAME ";
		 cin>>name;
		  cout<<"ENTER FEE ";
		 cin>>fee;
student s(rno,name,fee);
s.display();
return 0;
}
