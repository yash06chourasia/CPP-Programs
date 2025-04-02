// A
// A B 
// A B C
// A B C D
// A B C D E
#include<iostream>
using namespace std;
int main(){
    int n;
    int s=65;
    cout<<"Enter value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(s+j)<<" " ;
        }
        cout<<"\n";
    }
    return 0;
}