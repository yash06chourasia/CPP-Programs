// 54321
// 4321
// 321
// 21
// 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    for(int i=5;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}