#include<iostream>
using namespace std;
int main(){
    int n;
    int temp;
    cout<<"Enter the no. till where to get prime no. :";
    cin>>n;
    for(int i=2;i<=n;i++){
        temp=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                temp++;
                break;
            }
        }
        if(temp==0){
            cout<<"\n"<<i;
        }
    }
    return 0;
}