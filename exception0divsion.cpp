#include<iostream>
using namespace std;
int main()
{ int a,b,c;
cout<<"ENTER TWO NUMBERS \n";
cin>>a>>b;
try{
	if(b!=0){
		c=a/b;
		cout<<"\n division is "<<c;
	}
	else{
		throw(b);
	}
}
catch(int b){ cout<<"\ndivison by 0 error";
}
return 0;
}
