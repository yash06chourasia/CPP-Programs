#include<iostream>
using namespace std;
int main(){
    int count0=0,arr[]={1,0,1,0,1,1,0,1,0,0,1,1,1,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count0++;
        }
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<size;i++){
        arr[i]=1;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}