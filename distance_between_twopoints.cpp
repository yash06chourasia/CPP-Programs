#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    double D;
    cout<<"Enter the coordinates (X1 ,Y1) of point 1 : \n";
    cin>>x1>>y1;
    cout<<"\nEnter the coordinates (X2 ,Y2) of point 2 : \n";
    cin>>x2>>y2;
    D=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<"\nThe distance between two points is : "<<D;
    return 0;
}