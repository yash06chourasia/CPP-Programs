// E E E E E
// D D D D
// C C C
// B B
// A
 
#include<iostream>
using namespace std;
int main(){
    int n;
    int s=64;
    cout<<"Enter value of n : ";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<char(s+i)<<" " ;
        }
        cout<<"\n";
    }
    return 0;
}