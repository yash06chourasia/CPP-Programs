// *********  
//  *******
//   *****
//    ***
//     *  

#include<iostream>
using namespace std;
int main(){
    int n;
    int i,j,k;
    cout<<"Enter value of n : ";
    cin>>n;
    for(i=5;i>0;i--){
        for(j=1;j<=n-i;j++){
           cout<<" ";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}