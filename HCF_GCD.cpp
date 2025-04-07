#include<iostream>
using namespace std;
int main(){
    int n1,n2,hcf;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    for(int i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0){
           hcf=i;
        }
    }
    cout<<"GCD / HCF of two numbers is :"<<hcf;
    return 0;
}
