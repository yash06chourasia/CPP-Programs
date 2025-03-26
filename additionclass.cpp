#include<iostream>
using namespace std;
class sum{
	int val1,val2,total;
	public:
		int getdata()
		{ cout<<"ENTER THE VALUE 1 : \n";
		cin>>val1;
		cout<<"ENTER THE VALUE 2 : \n";
		cin>>val2;
		
		}
		int display()
		{ cout<<"\nTHE VALUE 1 IS "<<val1;
		 cout<<"\nTHE VALUE 2 IS "<<val2;
		}
		int add()
		{total=val1+val2;
		cout<<"\ntotal is "<<total;
		}
};
int main()
{ sum s;
s.getdata() ;
s.display();
s.add();
return 0;
}
