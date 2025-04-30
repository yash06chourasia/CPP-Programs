#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter the number of elements in an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements\n";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"The "<<n<<" elements are :\n ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
     }
     cout<<"The "<<n<<" sorted elements are :\n ";
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
          if(arr[j]>arr[j+1]){
            temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
          }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
     }
     return 0;
}