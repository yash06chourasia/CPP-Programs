#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<j;         
               }
               else{
                cout<<"*";
               }
        } 
        for(int j=5;j>0;j--){
            if(j<=i){
                cout<<j;      
               }
               else{
                cout<<"*";
               }
        }
        cout<<"\n";
    }
    return 0;
}