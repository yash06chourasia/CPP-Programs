// A
// B B 
// C C C
// D D D D
// E E E E E
#include<iostream>
using namespace std;
int main(){
    int n;
    int s=65;
    cout<<"Enter value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(s+i)<<" " ;
        }
        cout<<"\n";
    }
    return 0;
}