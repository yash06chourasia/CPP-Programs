#include<iostream>
using namespace std;

int main(){
    int n,dec=0,place=1,rem=0;
    cout<<"Enter the binary number : ";
    cin>>n;
    while(n>0){
        rem=n%10;
        dec=dec+(place)*rem;
        place=place*2;
        n=n/10;
    }
 cout<<"The decimal number is : " <<dec ;
}