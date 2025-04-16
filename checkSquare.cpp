#include<iostream>
using namespace std;
int main(){
    int n;
    bool check=false;
    int sq;
    cout<<"Enter the number to check whether it is a perfect square : ";
    cin>>n;
    if(n<=0){
        cout<<"NEGATIVE NUMBER AND 0 CANNOT BE A PERFECT SQUARE";
    }
    for(int i=1;i<n;i++){
        if(i*i==n){
            check=true;
            sq=i;
            break;
        }
    }
    if(check){
        cout<<n <<"is a square of "<<sq;
    }
    else{
        cout<<"Not a perfect square";

    }
    return 0;

}