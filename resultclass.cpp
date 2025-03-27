#include<iostream>
using namespace std;
class student{
	int en,cls;
	public:
		int getdata()
		{ cout<<"\n enter the enrollment number ";
		cin>>en;
		cout<<"\n enter the class ";
		cin>>cls;
		}
		int display()
		{ cout<<"\n enrollment number is "<<en<<"\n class is "<<cls;
		}
};
class result: public student{
	float s1 ,s2,s3,res;
	public:
			int getmarks(){
		           	cout<<"\n enter marks for subject 1";
					   cin>>s1;
					   	cout<<"\n enter marks for subject 2";
					   cin>>s2;
					   	cout<<"\n enter marks for subject 3";
					   cin>>s3;
					   }
	     	int  sum(){
			res=((s1+s2+s3)*100)/300;
			cout<<"\n RESULT IS "<<res;
		}
};
int main()
{
	result r;
	r.getdata();
	r.display();
	r.getmarks();
	r.sum();
	return 0;
}
