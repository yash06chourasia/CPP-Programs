#include<iostream>
using namespace std;
int main(){
    int sel;
    float temp;
    cout<<"Enter selection \n1. Celsius to Fahrenheit \n2. Fahrenheit to Celsius \n";
    cin>>sel;
    if(sel==1){
     cout<<"Enter the temperature to convert : ";
     cin>>temp;
      float f= (1.8 * temp) +32 ;
      cout<<"Farhenheit temperature is : "<<f;
    }
    else if(sel==2){
        cout<<"Enter the temperature to convert : ";
        cin>>temp;
        int c= 0.55556 * (temp-32);
        cout<<"Celsius temperature is : "<<c;
    }
    else{
        cout<<"Please enter a valid choice";
    }
    return 0;
}