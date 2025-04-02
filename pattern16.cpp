//     *  
//    * *
//   * * *
//  * * * *
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
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(i=n-1;i>0;i--){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<"\n";
    }

}
