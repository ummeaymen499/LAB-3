#include<iostream>
using namespace std;
main(){
cout<<"current popuation: ";
float p;
cin>> p;
cout<<"Birthrate(per month): ";
float b;
cin>>b;
float peryear;
peryear=b * 12;
float decade;
decade=peryear*10;
float threedecades;
threedecades=decade+decade+decade;
float afterthreedecades;
afterthreedecades=p+threedecades;
cout<<"The population in three decades will be: "<<afterthreedecades<<endl;
}