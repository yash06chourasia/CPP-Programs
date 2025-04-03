// A B C D E
// A B C D
// A B C
// A B 
// A

#include<iostream>
using namespace std;
int main(){
    int n;
    int s=65;
    cout<<"Enter value of n : ";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<char(s+j)<<" " ;
        }
        cout<<"\n";
    }
    return 0;
}