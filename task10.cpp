#include<iostream>
using namespace std;
main(){
cout<<"Number of wins: ";
int w;
cin>>w;
cout<<"Number of draws: ";
int d;
cin>>d;
cout<<"Number of losses: ";
int l;
cin>>l;
int points;
points=3*w+1*d+0*l;
cout<<"The Pakistani team made "<<points<<"in the Asia Cup tournament";
}