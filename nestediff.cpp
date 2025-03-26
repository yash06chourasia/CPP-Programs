#include<iostream>
using namespace std;
int main()
{int amt;
cout<<"ENTER THE AMOUNT\n";
cin>>amt;
if(amt>5000){
	if(amt>15000){
		cout<<"shopping";
		
	}
	else{
		cout<<"movie";
	}
}
else{
	cout<<"stay home";
}
return 0;
}
