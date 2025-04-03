#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"Enter The Number :";
    cin>>n;
    if(n<0) cout<<"Please enter a positive number";
    else if(n==0 ||n==1) cout<<"Factorial is 1";
    else{
  for(int i=1;i<=n;i++){
    fact*=i;
  }
  cout<<"Factorial is :"<<fact;
    }
    return 0;
}