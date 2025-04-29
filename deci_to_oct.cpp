#include<iostream>
using namespace std;

int main(){
    int n,oct=0,place=1,rem=0;
    cout<<"Enter the decimal number : ";
    cin>>n;
    while(n>0){
        rem=n%8;
        oct=oct+rem*place;
        n=n/8;
        place=place*10;
    }
 cout<<"The octal number is : " <<oct;
}