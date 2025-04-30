#include<iostream>
using namespace std;
int main(){
    int first=0,second=1,n,next;
    cout<<"Enter the number of terms for fibonacci series : ";
    cin>>n;
    if(n<=0){
        cout<<"Enter positive number";
        return 0;
    }
    else if(n==1){
        cout<<first<<" ";
    }
    else{
        cout<<first<<" "<<second<<" ";
        for(int i=2;i<n;i++){
        next=first+second;
        cout<<next<<" ";
        first=second;
        second=next;
    }
}
return 0;
}