#include<iostream>
using namespace std;
int main(){
    int n,search;
    bool found=false;
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
     cout<<"Enter the element to search : ";
     cin>>search;
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            cout<<"\nElement found at index : "<<i;
            found=true;
            continue;
        }
    }
    if(found==false){
        cout<<"Element not found ";
    }
     
     return 0;
}