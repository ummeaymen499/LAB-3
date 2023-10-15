#include<iostream>
using namespace std;
main(){
cout<<"Enter the name of the student: ";
string name;
cin>>name;
cout<<"Matric marks(out of 1100): ";
float matric;
cin>>matric;
cout<<"intermediate marks(out of 550): ";
float inter;
cin>>inter;
cout<<"Ecat marks(out of 400): ";
float ecat;
cin>>ecat;
float agg;
agg=(ecat/400*0.5)+(matric/1100*0.1)+(inter/550*0.4);
float aggscore;
aggscore=agg*100;
cout<<"Aggregate score for "<<name<<" in UET is "<<aggscore;
}
 