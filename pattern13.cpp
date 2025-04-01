// * * * * *  
//  * * * *
//   * * *
//    * *
//     *  

#include<iostream>
using namespace std;
int main(){
    int n;
    int i,j,k;
    cout<<"Enter value of n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=0;j<=i-1;j++){
           cout<<" ";
        }
        for(k=n-j;k>=0;k--){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}