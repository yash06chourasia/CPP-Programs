#include<iostream>
using namespace std;
int main(){
    int n;
    bool prime=true;
    cout<<"Enter the no. to check for prime :";
    cin>>n;
    if(n==0 || n==1){
        cout<<"Not a prime no.";
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            prime=false;
            break;
        }     
    }
    if(prime){
        cout<<"Prime no.";
    }
    else{
        cout<<"Not a Prime no.";
    }
    return 0;
}