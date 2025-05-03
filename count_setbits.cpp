#include<iostream>
using namespace std;
int main(){
    int n,temp,count=0;
    cout<<"Enter the number : ";
    cin>>n;
    temp=n;
    while(n>0){
        int rem=n%2;
        if(rem==1){
            count++;
        }
        n=n/2;
    }
    cout<<"The number of set bits in "<<temp<<" is : "<<count;
    return 0;
}