#include<iostream>
using namespace std;
int main()
{ int age;
cout<<"ENTER YOUR AGE \n";
cin>>age;
try{
	if(age>=18){
	
		cout<<"\n eligible ";
	}
	else{
		throw(age);
	}
}
catch(int age){ cout<<"\nbelow 18 not eligible";
}
return 0;
}
