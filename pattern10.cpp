// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
#include<iostream>
using namespace std;
int main(){
    int n;
    int s=1;
    cout<<"Enter value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<s<<"\t";
            s++;
        }
        cout<<"\n";
    }
    return 0;
}