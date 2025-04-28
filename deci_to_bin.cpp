#include<iostream>
using namespace std;

int main(){
    int n,bin=0,place=1,rem=0;
    cout<<"Enter the decimal number : ";
    cin>>n;
    while(n>0){
        rem=n%2;
        bin=bin+rem*place;
        n=n/2;
        place=place*10;
    }
 cout<<"The binary number is : " <<bin;
}