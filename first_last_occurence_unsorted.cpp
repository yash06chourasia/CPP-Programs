//Findinng first and last occurence in unsorted array
#include<iostream>
using namespace std;
int main(){
    int n,target,first=-1,last=-1;
    cout<<"Enter the number of elements in an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements\n";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"The "<<n<<" elements are :\n ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
      }
     cout<<"\nEnter the element to find its first and last occurence in a unsorted array : ";
     cin>>target;
     for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"The first occurence of "<< target <<" is at index : "<<i;
            first=1;
            break;
        }
     }
     for(int i=n-1;i>=0;i--){
        if(arr[i]==target){
            cout<<"\nThe last occurence of "<< target <<" is at index : "<<i;
            last=1;
            break;
        }
     }
     if(first==-1 && last==-1){
        cout<<"No element exist";
     }
     return 0;
 }