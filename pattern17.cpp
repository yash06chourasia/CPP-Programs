// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n-1;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}