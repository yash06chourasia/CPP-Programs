#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year to check Leap Year :";
    cin>>year;
    if(year%400==0){
        cout<<"LEAP YEAR";
    }
    else if(year%100==0){
        cout<<"NOT A LEAP YEAR";
    }
    else if(year%4==0){
        cout<<"LEAP YEAR";
    }
    else{
        cout<<"NOT A LEAP YEAR";
    }
    return 0;
}