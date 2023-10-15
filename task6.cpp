#include<iostream>
using  namespace std;
main(){
cout<<"Enter the value in megabytes: ";
float MB;
cin>>MB;
int bits;
bits=MB*1024*1024*8;
cout<<MB<<"megabytes is equivalent to"<<bits<<" bits ";
}
 