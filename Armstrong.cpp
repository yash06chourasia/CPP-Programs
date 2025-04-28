#include<iostream>
using namespace std;
int main(){
    int n,digit=0,temp,sum=0;
    cout<<"Enter the number to check armstrong no. ";
    cin>>n;
    temp=n;
    while(temp>0){
        temp=temp/10;
        digit++;
}
temp=n;
while(temp>0){
    int rem=temp%10;
    int pow=1;
    for(int i=1;i<=digit;i++){
        pow=pow*rem;
    }
    sum=sum+pow;
    temp=temp/10;
}
if(sum==n){
    cout<<"IT IS AN ARMSTRONG NUMBER";
}
else{
    cout<<"IT IS NOT AN ARMSTRONG NUMBER";
}
return 0;
}
