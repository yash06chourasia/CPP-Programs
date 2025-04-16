#include<iostream>
using namespace std;    
int main(){
    int n;
    cout<<"Enter the number to find square till (i.e 10 for 100):";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"\nSquare of "<<i<<" is : "<<i*i;
    }
    return  0;
}