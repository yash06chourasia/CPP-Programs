#include<iostream>
using namespace std;
int main(){
    int hour,min,sec=0;
    string s;
    cout<<"Enter time as hour min sec AM/PM seperated by space \n";
    cin>>hour>>min>>sec>>s;
    cout<<"The time in 12 hour format is "<<hour<<":"<<min<<":"<<sec<<" "<<s;
    if(s=="AM" && hour==12){
        hour=0;
    }
    else if(s=="PM" && hour!=12){
        hour=hour+12;
    }
    cout<<"The time in 24 hour format is "<<hour<<":"<<min<<":"<<sec;
    return 0;
}
